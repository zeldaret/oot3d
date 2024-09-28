#ifndef _Z_BG_SPOT16_DOUGHNUT_H_
#define _Z_BG_SPOT16_DOUGHNUT_H_

#include "global.hpp"

struct BgSpot16Doughnut;

typedef struct BgSpot16Doughnut {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} BgSpot16Doughnut; // size = 0x1B4

extern ActorInit Bg_Spot16_Doughnut_InitVars;

#endif
