#ifndef _Z_BG_MIZU_BWALL_H_
#define _Z_BG_MIZU_BWALL_H_

#include "global.hpp"

struct BgMizuBwall;

typedef struct BgMizuBwall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x174];
} BgMizuBwall; // size = 0x318

extern ActorInit Bg_Mizu_Bwall_InitVars;

#endif
