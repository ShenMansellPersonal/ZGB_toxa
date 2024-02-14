#pragma bank 1

#include "Fade.h"
#include "Palette.h"
#include "Math.h"

UWORD ZGB_Fading_BPal[32];
UWORD ZGB_Fading_SPal[32];

// Keep a whole partially faded palette in memory 
// so we can write it all quickly in 1 vblank
static UWORD fadePalette[32];
static UWORD fadePaletteSprite[32];


UINT8 FadeInOp(UINT16 c, UINT16 i) {
	return U_LESS_THAN(c, i) ? 0: (c - i);
}

void FadeDMG(UINT8 fadeout) {
	UINT8 colors[12];
	UINT8* pals[] = {(UINT8*)0xFF47, (UINT8*)0xFF48, (UINT8*)0xFF49};
	UINT8 i, j; 
	UINT8* c = colors;
	UINT8 p;

	//Pick current palette colors
	for(i = 0; i != 3; ++i) {
		p = (UINT8)*(pals[i]);
		for(j = 0; j != 8; j += 2, ++c) {
			*c = (DespRight(p, j)) & 0x3;
		}
	}

	for(i = 0; i != 4; ++i) {
		p = fadeout ? 3 - i : i;
		for(j = 0; j != 3; ++j) {
			c = &colors[j << 2];
			*pals[j] = PAL_DEF(FadeInOp(c[0], p), FadeInOp(c[1], p), FadeInOp(c[2], p), FadeInOp(c[3], p));
		}
		wait_vbl_done();
		wait_vbl_done();
		wait_vbl_done();
	}
}

void FadeInDMG() {
	FadeDMG(0);
}

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

void FadeInCOLOR() {
	UINT8 i;
	for(i = 0; i != 6; i ++) {
		FadeStepColor(i);	
	}
}

void FadeIn() BANKED {
#ifdef CGB
	if (_cpu == CGB_TYPE) {
		FadeInCOLOR();
	} else
#endif
		FadeInDMG();
}

void FadeOutDMG() {
	FadeDMG(1);
}

void FadeOutColor() {
	UINT8 i;
	for(i = 5; i != 0xFF; -- i) {
		FadeStepColor(i);	
	}
}

void FadeOut() BANKED {
#ifdef CGB
	if (_cpu == CGB_TYPE) {
		FadeOutColor();
	} else 
#endif
		FadeOutDMG();
}

