#ifndef _Z_BG_SPOT15_SAKU_H_
#define _Z_BG_SPOT15_SAKU_H_

#include "global.hpp"

struct BgSpot15Saku;

typedef struct BgSpot15Saku {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgSpot15Saku; // size = 0x1E0

extern ActorInit Bg_Spot15_Saku_InitVars;

#endif
