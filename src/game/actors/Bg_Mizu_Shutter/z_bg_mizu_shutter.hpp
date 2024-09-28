#ifndef _Z_BG_MIZU_SHUTTER_H_
#define _Z_BG_MIZU_SHUTTER_H_

#include "global.hpp"

struct BgMizuShutter;

typedef struct BgMizuShutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x48];
} BgMizuShutter; // size = 0x1EC

extern ActorInit Bg_Mizu_Shutter_InitVars;

#endif
