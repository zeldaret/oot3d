#ifndef _Z_BG_SPOT01_FUSYA_H_
#define _Z_BG_SPOT01_FUSYA_H_

#include "global.hpp"

struct BgSpot01Fusya;

typedef struct BgSpot01Fusya {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x18];
} BgSpot01Fusya; // size = 0x1BC

extern ActorInit Bg_Spot01_Fusya_InitVars;

#endif
