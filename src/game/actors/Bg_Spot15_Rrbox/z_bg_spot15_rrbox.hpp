#ifndef _Z_BG_SPOT15_RRBOX_H_
#define _Z_BG_SPOT15_RRBOX_H_

#include "global.hpp"

struct BgSpot15Rrbox;

typedef struct BgSpot15Rrbox {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgSpot15Rrbox; // size = 0x1E0

extern ActorInit Bg_Spot15_Rrbox_InitVars;

#endif
