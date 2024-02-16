#include "Fade.h"
#include "Palette.h"
#include "Math.h"

UWORD ZGB_Fading_BPal[32];
UWORD ZGB_Fading_SPal[32];

// Keep a whole partially faded palette in memory 
// so we can write it all quickly in 1 vblank
static UWORD fadePalette[32];
static UWORD fadePaletteSprite[32];

UWORD UpdateColor(UINT8 i, UWORD col) {
	//return RGB2(DespRight(PAL_RED(col), i), DespRight(PAL_GREEN(col), i), DespRight(PAL_BLUE(col), i));
	return RGB2(PAL_RED(col) | DespRight(0x1F, 5 - i), PAL_GREEN(col) | DespRight(0x1F, 5 - i), PAL_BLUE(col) | DespRight(0x1F, 5 - i));
}

void FadeStepColor(UINT8 i) {
	UINT8 pal, c;
	UINT8 x = 0;
	UWORD* col = ZGB_Fading_BPal;
	UWORD* col_s = ZGB_Fading_SPal;
	
	// Do the full bkg palette first
	for (pal = 0; pal < 8; pal ++) {
		for (c = 0; c < 4; ++c, ++col, ++col_s) {
			fadePalette[x] = UpdateColor(i, *col);
			fadePaletteSprite[x] = UpdateColor(i, *col_s);
			x++;
		}
	}

	// wait until the vblank to write the palette
	vsync ();
	set_bkg_palette(pal, 8, fadePalette);
	set_sprite_palette(pal, 8, fadePaletteSprite);
	vsync ();
}

void FadeIn(void) BANKED {
	UINT8 i;
	for(i = 0; i != 6; i ++) {
		FadeStepColor(i);	
	}
}

void FadeOut(void) BANKED {
	UINT8 i;
	for(i = 5; i != 0xFF; -- i) {
		FadeStepColor(i);	
	}
}
