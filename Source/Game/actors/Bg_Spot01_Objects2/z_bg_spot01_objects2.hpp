#ifndef _Z_BG_SPOT01_OBJECTS2_H_
#define _Z_BG_SPOT01_OBJECTS2_H_

#include "global.hpp"

struct BgSpot01Objects2;

typedef struct BgSpot01Objects2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x48];
} BgSpot01Objects2; // size = 0x1EC

extern ActorInit Bg_Spot01_Objects2_InitVars;

#endif
