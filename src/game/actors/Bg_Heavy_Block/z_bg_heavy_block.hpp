#ifndef _Z_BG_HEAVY_BLOCK_H_
#define _Z_BG_HEAVY_BLOCK_H_

#include "global.hpp"

struct BgHeavyBlock;

typedef struct BgHeavyBlock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgHeavyBlock; // size = 0x1E0

extern ActorInit Bg_Heavy_Block_InitVars;

#endif
