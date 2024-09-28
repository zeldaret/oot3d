#ifndef _Z_BG_MIZU_WATER_H_
#define _Z_BG_MIZU_WATER_H_

#include "global.hpp"

struct BgMizuWater;

typedef struct BgMizuWater {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgMizuWater; // size = 0x1C0

extern ActorInit Bg_Mizu_Water_InitVars;

#endif
