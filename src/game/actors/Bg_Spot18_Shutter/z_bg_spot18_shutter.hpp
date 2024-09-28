#ifndef _Z_BG_SPOT18_SHUTTER_H_
#define _Z_BG_SPOT18_SHUTTER_H_

#include "global.hpp"

struct BgSpot18Shutter;

typedef struct BgSpot18Shutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgSpot18Shutter; // size = 0x1C4

extern ActorInit Bg_Spot18_Shutter_InitVars;

#endif
