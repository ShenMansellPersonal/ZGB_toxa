#include "ZGBMain.h"
#include "MetaSpriteInfo.h"

#define _SPRITE(SPRITE_ID, DATA) DECLARE_SPRITE(SPRITE_ID); extern const void __bank_##SPRITE_ID; extern const void __bank_##DATA;
SPRITES
#undef _SPRITE

UINT8 spriteBanks[N_SPRITE_TYPES];
UINT8 spriteDataBanks[N_SPRITE_TYPES];

Void_Func_Void spriteStartFuncs[N_SPRITE_TYPES];
Void_Func_Void spriteUpdateFuncs[N_SPRITE_TYPES];
Void_Func_Void spriteDestroyFuncs[N_SPRITE_TYPES];

#define _SPRITE(SPRITE_ID, DATA) extern const void __bank_##DATA; extern const struct MetaSpriteInfo DATA;
	SPRITES
#undef _SPRITE

const struct MetaSpriteInfo* spriteDatas[N_SPRITE_TYPES];
UINT8 spriteIdxs[N_SPRITE_TYPES];
UINT8 spritePalsOffset[N_SPRITE_TYPES];

#define _SPRITE(SPRITE_ID, DATA) \
	spriteBanks[SPRITE_ID] = BANK(SPRITE_ID); \
	spriteStartFuncs[SPRITE_ID] = Start_##SPRITE_ID; \
	spriteUpdateFuncs[SPRITE_ID] = Update_##SPRITE_ID; \
	spriteDestroyFuncs[SPRITE_ID] = Destroy_##SPRITE_ID; \
	spriteDataBanks[SPRITE_ID] = BANK(DATA); \
	spriteDatas[SPRITE_ID] = &DATA;
void InitSprites(void) {
	SPRITES
}
#undef _SPRITE
