#ifndef _Z_BG_SPOT03_TAKI_H_
#define _Z_BG_SPOT03_TAKI_H_

#include "global.hpp"

struct BgSpot03Taki;

typedef struct BgSpot03Taki {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x38];
} BgSpot03Taki; // size = 0x1DC

extern ActorInit Bg_Spot03_Taki_InitVars;

#endif
