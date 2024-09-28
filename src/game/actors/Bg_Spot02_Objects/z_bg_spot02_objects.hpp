#ifndef _Z_BG_SPOT02_OBJECTS_H_
#define _Z_BG_SPOT02_OBJECTS_H_

#include "global.hpp"

struct BgSpot02Objects;

typedef struct BgSpot02Objects {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgSpot02Objects; // size = 0x1E0

extern ActorInit Bg_Spot02_Objects_InitVars;

#endif
