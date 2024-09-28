#ifndef _Z_BG_SPOT07_TAKI_H_
#define _Z_BG_SPOT07_TAKI_H_

#include "global.hpp"

struct BgSpot07Taki;

typedef struct BgSpot07Taki {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgSpot07Taki; // size = 0x1D8

extern ActorInit Bg_Spot07_Taki_InitVars;

#endif
