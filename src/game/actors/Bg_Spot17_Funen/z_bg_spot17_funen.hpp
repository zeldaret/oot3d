#ifndef _Z_BG_SPOT17_FUNEN_H_
#define _Z_BG_SPOT17_FUNEN_H_

#include "global.hpp"

struct BgSpot17Funen;

typedef struct BgSpot17Funen {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} BgSpot17Funen; // size = 0x1A8

extern ActorInit Bg_Spot17_Funen_InitVars;

#endif
