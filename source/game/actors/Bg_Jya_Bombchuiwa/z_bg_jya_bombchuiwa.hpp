#ifndef _Z_BG_JYA_BOMBCHUIWA_H_
#define _Z_BG_JYA_BOMBCHUIWA_H_

#include "global.hpp"

struct BgJyaBombchuiwa;

typedef struct BgJyaBombchuiwa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x90];
} BgJyaBombchuiwa; // size = 0x234

extern ActorInit Bg_Jya_Bombchuiwa_InitVars;

#endif
