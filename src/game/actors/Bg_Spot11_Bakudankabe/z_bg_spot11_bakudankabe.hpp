#ifndef _Z_BG_SPOT11_BAKUDANKABE_H_
#define _Z_BG_SPOT11_BAKUDANKABE_H_

#include "global.hpp"

struct BgSpot11Bakudankabe;

typedef struct BgSpot11Bakudankabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x74];
} BgSpot11Bakudankabe; // size = 0x218

extern ActorInit Bg_Spot11_Bakudankabe_InitVars;

#endif
