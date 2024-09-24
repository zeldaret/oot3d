#ifndef _Z_BG_JYA_LIFT_H_
#define _Z_BG_JYA_LIFT_H_

#include "global.hpp"

struct BgJyaLift;

typedef struct BgJyaLift {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgJyaLift; // size = 0x1C8

extern ActorInit Bg_Jya_Lift_InitVars;

#endif
