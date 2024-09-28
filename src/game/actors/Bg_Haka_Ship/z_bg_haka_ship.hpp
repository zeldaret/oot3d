#ifndef _Z_BG_HAKA_SHIP_H_
#define _Z_BG_HAKA_SHIP_H_

#include "global.hpp"

struct BgHakaShip;

typedef struct BgHakaShip {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgHakaShip; // size = 0x1E0

extern ActorInit Bg_Haka_Ship_InitVars;

#endif
