#include "main.h"
#include "Flip.h"

#define STATE_DEF_END
#define _SPRITE_DMG(SPRITE_ID, DATA) _SPRITE(SPRITE_ID, DATA, FLIP_NONE)
#define _SPRITE_DMG_FLIP(SPRITE_ID, DATA, FLIP) _SPRITE(SPRITE_ID, DATA, FLIP)
#define _SPRITE_DMG_MIRROR(SPRITE_ID, DATA, FLIP) _SPRITE(SPRITE_ID, DATA, FLIP)
#define _SPRITE_COLOR(SPRITE_ID, DATA) _SPRITE(SPRITE_ID, DATA, FLIP_NONE)
#define _SPRITE_COLOR_FLIP(SPRITE_ID, DATA, FLIP) _SPRITE(SPRITE_ID, DATA, FLIP)
#define _SPRITE_COLOR_MIRROR(SPRITE_ID, DATA, FLIP) _SPRITE(SPRITE_ID, DATA, FLIP)
#define SPRITE_DEF_END

#define _STATE(STATE_ID) STATE_ID,
typedef enum {
	STATES

	N_STATES
} STATE;
#undef _STATE

#define _SPRITE(SPRITE_ID, DATA, FLIP) SPRITE_ID,
typedef enum {
	SPRITES

	N_SPRITE_TYPES
} SPRITE_TYPE;
#undef _SPRITE