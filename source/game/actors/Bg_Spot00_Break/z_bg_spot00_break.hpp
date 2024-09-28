#ifndef _Z_BG_SPOT00_BREAK_H_
#define _Z_BG_SPOT00_BREAK_H_

#include "global.hpp"

struct BgSpot00Break;

typedef struct BgSpot00Break {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgSpot00Break; // size = 0x1C4

extern ActorInit Bg_Spot00_Break_InitVars;

#endif
