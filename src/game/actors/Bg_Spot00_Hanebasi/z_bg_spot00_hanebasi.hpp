#ifndef _Z_BG_SPOT00_HANEBASI_H_
#define _Z_BG_SPOT00_HANEBASI_H_

#include "global.hpp"

struct BgSpot00Hanebasi;

typedef struct BgSpot00Hanebasi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x58];
} BgSpot00Hanebasi; // size = 0x1FC

extern ActorInit Bg_Spot00_Hanebasi_InitVars;

#endif
