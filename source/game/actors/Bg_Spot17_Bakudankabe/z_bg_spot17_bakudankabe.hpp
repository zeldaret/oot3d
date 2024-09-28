#ifndef _Z_BG_SPOT17_BAKUDANKABE_H_
#define _Z_BG_SPOT17_BAKUDANKABE_H_

#include "global.hpp"

struct BgSpot17Bakudankabe;

typedef struct BgSpot17Bakudankabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgSpot17Bakudankabe; // size = 0x1C0

extern ActorInit Bg_Spot17_Bakudankabe_InitVars;

#endif
