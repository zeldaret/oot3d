#ifndef _Z_BG_SPOT01_IDOHASHIRA_H_
#define _Z_BG_SPOT01_IDOHASHIRA_H_

#include "global.hpp"

struct BgSpot01Idohashira;

typedef struct BgSpot01Idohashira {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} BgSpot01Idohashira; // size = 0x1D0

extern ActorInit Bg_Spot01_Idohashira_InitVars;

#endif
