#ifndef _Z_BG_SPOT08_BAKUDANKABE_H_
#define _Z_BG_SPOT08_BAKUDANKABE_H_

#include "global.hpp"

struct BgSpot08Bakudankabe;

typedef struct BgSpot08Bakudankabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x12C];
} BgSpot08Bakudankabe; // size = 0x2D0

extern ActorInit Bg_Spot08_Bakudankabe_InitVars;

#endif
