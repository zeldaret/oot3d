#ifndef _Z_BG_SPOT05_SOKO_H_
#define _Z_BG_SPOT05_SOKO_H_

#include "global.hpp"

struct BgSpot05Soko;

typedef struct BgSpot05Soko {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgSpot05Soko; // size = 0x1CC

extern ActorInit Bg_Spot05_Soko_InitVars;

#endif
