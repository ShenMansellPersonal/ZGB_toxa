#include "Banks/SetAutoBank.h"

#include <stdbool.h>

#include "SpriteManager.h"
#include "Keys.h"
#include "ZGBMain.h"

typedef enum {
	ANIM_IDLE = 0,
	ANIM_WALK_LEFT,
	ANIM_WALK_RIGHT,
	ANIM_WALK_UP,
	ANIM_WALK_DOWN,
	N_ANIMS
} animations_e;


static const UINT8 anim_idle[]       = VECTOR(0);
static const UINT8 anim_walk_left[]  = VECTOR(6, 7);
static const UINT8 anim_walk_right[] = VECTOR(4, 5);
static const UINT8 anim_walk_up[]    = VECTOR(2, 3);
static const UINT8 anim_walk_down[]  = VECTOR(0, 1);

static const UINT8 * const animations[N_ANIMS] = {
	[ANIM_IDLE]       = anim_idle,  
	[ANIM_WALK_LEFT]  = anim_walk_left, 
	[ANIM_WALK_RIGHT] = anim_walk_right,
	[ANIM_WALK_UP]    = anim_walk_up, 
	[ANIM_WALK_DOWN]  = anim_walk_down 
};
static animations_e old_anim, anim; 

#define ANIMATION_SPEED 16

void START(void) {
	old_anim = anim = ANIM_IDLE;
	SetSpriteAnim(THIS, animations[anim], ANIMATION_SPEED);
}

void UPDATE(void) {
	// save old animation state, animation state to idle (will be overwritten, if keys are pressed)
	old_anim = anim, anim = ANIM_IDLE;
	// check D-Pad buttons and move the player within the screen boundaries
	if (KEY_PRESSED(J_LEFT)) {
		if (THIS->x) THIS->x--;
		anim = ANIM_WALK_LEFT;
	} else if (KEY_PRESSED(J_RIGHT)) {
		if (THIS->x < (SCREEN_WIDTH - 16)) THIS->x++;
		anim = ANIM_WALK_RIGHT;
	}
	if (KEY_PRESSED(J_UP)) {
		if (THIS->y) THIS->y--;
		anim = ANIM_WALK_UP;
	} else if (KEY_PRESSED(J_DOWN)) {
		if (THIS->y < (SCREEN_HEIGHT - 16)) THIS->y++;
		anim = ANIM_WALK_DOWN;
	}

	// if animation state changed, then set the new animation
	if (old_anim != anim) SetSpriteAnim(THIS, animations[anim], ANIMATION_SPEED);
}

void DESTROY(void) {
}