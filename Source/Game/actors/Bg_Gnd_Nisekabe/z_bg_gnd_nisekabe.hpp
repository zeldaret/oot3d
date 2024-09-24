#ifndef _Z_BG_GND_NISEKABE_H_
#define _Z_BG_GND_NISEKABE_H_

#include "global.hpp"

struct BgGndNisekabe;

typedef struct BgGndNisekabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ SkeletonAnimationModel* skelAnimModel;
} BgGndNisekabe; // size = 0x1A8

extern ActorInit Bg_Gnd_Nisekabe_InitVars;

#endif
