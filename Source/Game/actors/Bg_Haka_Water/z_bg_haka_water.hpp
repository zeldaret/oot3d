#ifndef _Z_BG_HAKA_WATER_H_
#define _Z_BG_HAKA_WATER_H_

#include "global.hpp"

struct BgHakaWater;

typedef struct BgHakaWater {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgHakaWater; // size = 0x1C0

extern ActorInit Bg_Haka_Water_InitVars;

#endif
