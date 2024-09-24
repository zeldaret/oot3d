#ifndef _Z_BG_SPOT01_IDOSOKO_H_
#define _Z_BG_SPOT01_IDOSOKO_H_

#include "global.hpp"

struct BgSpot01Idosoko;

typedef struct BgSpot01Idosoko {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgSpot01Idosoko; // size = 0x1C4

extern ActorInit Bg_Spot01_Idosoko_InitVars;

#endif
