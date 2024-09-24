#ifndef _Z_BG_SPOT08_ICEBLOCK_H_
#define _Z_BG_SPOT08_ICEBLOCK_H_

#include "global.hpp"

struct BgSpot08Iceblock;

typedef struct BgSpot08Iceblock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x58];
} BgSpot08Iceblock; // size = 0x1FC

extern ActorInit Bg_Spot08_Iceblock_InitVars;

#endif
