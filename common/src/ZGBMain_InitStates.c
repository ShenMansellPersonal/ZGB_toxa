#include "ZGBMain.h"

#define _STATE(STATE_ID) DECLARE_STATE(STATE_ID); extern const void __bank_##STATE_ID;
STATES
#undef _STATE

UINT8 stateBanks[N_STATES];
Void_Func_Void startFuncs[N_STATES];
Void_Func_Void updateFuncs[N_STATES];

#define _STATE(STATE_ID)                    \
	startFuncs[STATE_ID] = Start_##STATE_ID;  \
	updateFuncs[STATE_ID] = Update_##STATE_ID;\
	stateBanks[STATE_ID] = BANK(STATE_ID);
	
void InitStates(void) {
	STATES
}
#undef _STATE

