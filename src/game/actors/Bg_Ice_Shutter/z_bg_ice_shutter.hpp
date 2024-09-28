#ifndef _Z_BG_ICE_SHUTTER_H_
#define _Z_BG_ICE_SHUTTER_H_

#include "global.hpp"

struct BgIceShutter;

typedef struct BgIceShutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgIceShutter; // size = 0x1C4

extern ActorInit Bg_Ice_Shutter_InitVars;

#endif
