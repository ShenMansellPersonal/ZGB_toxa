#include "main.h"

#include <gb/gb.h> 
#include <string.h>

#include "OAMManager.h"
#include "Scroll.h"
#include "Keys.h"
#include "Music.h"
#include "SpriteManager.h"
#include "BankManager.h"
#include "Fade.h"
#include "Palette.h"
#include <gb/cgb.h>

extern UINT8 next_state;

UINT8 delta_time;
UINT8 current_state;
UINT8 state_running = 0;

void SetState(UINT8 state) {
	state_running = 0;
	next_state = state;
}

UINT8 vbl_count = 0;
INT16 old_scroll_x = 0, old_scroll_y = 0;
UINT8 music_mute_frames = 0;
void vbl_update() {
	vbl_count ++;
	
	//Instead of assigning scroll_y to SCX_REG I do a small interpolation that smooths the scroll transition giving the
	//Illusion of a better frame rate
	if(old_scroll_x < scroll_x)
		old_scroll_x += (scroll_x - old_scroll_x + 1) >> 1;
	else if(old_scroll_x > scroll_x)
		old_scroll_x -= (old_scroll_x - scroll_x + 1) >> 1;
	SCX_REG = old_scroll_x + (scroll_offset_x << 3);

	if(old_scroll_y < scroll_y)
		old_scroll_y += (scroll_y - old_scroll_y + 1) >> 1;
	else if(old_scroll_y > scroll_y)
		old_scroll_y -= (old_scroll_y - scroll_y + 1) >> 1;
	SCY_REG = old_scroll_y + (scroll_offset_y << 3);

	if(music_mute_frames != 0) {
		music_mute_frames --;
		if(music_mute_frames == 0) {
			UNMUTE_ALL_CHANNELS;
		}
	}
}

void InitStates();
void InitSprites();

extern UWORD ZGB_Fading_BPal[32];
extern UWORD ZGB_Fading_SPal[32];
#ifdef CGB	
void SetPalette(PALETTE_TYPE t, UINT8 first_palette, UINT8 nb_palettes, UINT16 *rgb_data, UINT8 bank) {
	if(first_palette + nb_palettes > 8)
		return; //Adding more palettes than supported

	UWORD* pal_ptr = (t == BG_PALETTE) ? ZGB_Fading_BPal : ZGB_Fading_SPal;
	PUSH_BANK(bank);
	if(t == BG_PALETTE) {
		set_bkg_palette(first_palette, nb_palettes, rgb_data);
	} else {
		set_sprite_palette(first_palette, nb_palettes, rgb_data);
	}
	memcpy(&pal_ptr[first_palette << 2], rgb_data, nb_palettes << 3);
	POP_BANK;
}
#endif

extern UINT8 last_bg_pal_loaded;
UINT16 default_palette[] = {RGB(31, 31, 31), RGB(20, 20, 20), RGB(10, 10, 10), RGB(0, 0, 0)};
void main() {
#ifdef CGB
	UINT8 i;
	cpu_fast();
#endif
	INIT_MUSIC;

	PUSH_BANK(1);
	InitStates();
	InitSprites();
	POP_BANK;
	
	CRITICAL {
#ifdef CGB
		TMA_REG = _cpu == CGB_TYPE ? 120U : 0xBCU;
#else
		TMA_REG = 0xBCU;
#endif
		TAC_REG = 0x04U;

		add_VBL(vbl_update);
		add_TIM(MusicCallback);
	}

	set_interrupts(VBL_IFLAG | TIM_IFLAG);

	LCDC_REG |= LCDCF_OBJDEFAULT | LCDCF_OBJON | LCDCF_BGON;

	while(1) {
		DISPLAY_OFF

		StopMusic;

		SpriteManagerReset();
		state_running = 1;
		current_state = next_state;
		scroll_target = 0;
		last_bg_pal_loaded = 0;
		
#ifdef CGB
		if (_cpu == CGB_TYPE) {
			for(i = 0; i < 8; ++ i)
			{
				SetPalette(BG_PALETTE, i, 1, default_palette, 1);
				SetPalette(SPRITES_PALETTE, i, 1, default_palette, 1);
			}
		} else 
#endif
		BGP_REG = OBP0_REG = OBP1_REG = PAL_DEF(0, 1, 2, 3);

		PUSH_BANK(stateBanks[current_state]);
			(startFuncs[current_state])();
		POP_BANK;
		old_scroll_x = scroll_x;
		old_scroll_y = scroll_y;

		if(state_running) {
			DISPLAY_ON;
			FadeOut();
		}

		while (state_running) {
			if(!vbl_count)
				wait_vbl_done();
			delta_time = vbl_count == 1u ? 0u : 1u;
			vbl_count = 0;

			UPDATE_KEYS();
			
			SpriteManagerUpdate();
			PUSH_BANK(stateBanks[current_state]);
				updateFuncs[current_state]();
			POP_BANK;
		}

		FadeIn();
	}
}

