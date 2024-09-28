#ifndef _Z_BG_MIZU_UZU_H_
#define _Z_BG_MIZU_UZU_H_

#include "global.hpp"

struct BgMizuUzu;

typedef struct BgMizuUzu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgMizuUzu; // size = 0x1C0

extern ActorInit Bg_Mizu_Uzu_InitVars;

#endif
