#ifndef _Z_BG_SPOT16_BOMBSTONE_H_
#define _Z_BG_SPOT16_BOMBSTONE_H_

#include "global.hpp"

struct BgSpot16Bombstone;

typedef struct BgSpot16Bombstone {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE8];
} BgSpot16Bombstone; // size = 0x28C

extern ActorInit Bg_Spot16_Bombstone_InitVars;

#endif
