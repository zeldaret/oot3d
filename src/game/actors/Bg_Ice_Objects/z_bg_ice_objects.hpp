#ifndef _Z_BG_ICE_OBJECTS_H_
#define _Z_BG_ICE_OBJECTS_H_

#include "global.hpp"

struct BgIceObjects;

typedef struct BgIceObjects {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} BgIceObjects; // size = 0x1D0

extern ActorInit Bg_Ice_Objects_InitVars;

#endif
