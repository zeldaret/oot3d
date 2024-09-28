#ifndef _Z_BG_SPOT11_OASIS_H_
#define _Z_BG_SPOT11_OASIS_H_

#include "global.hpp"

struct BgSpot11Oasis;

typedef struct BgSpot11Oasis {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC];
} BgSpot11Oasis; // size = 0x1B0

extern ActorInit Bg_Spot11_Oasis_InitVars;

#endif
