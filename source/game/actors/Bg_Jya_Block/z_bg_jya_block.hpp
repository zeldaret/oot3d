#ifndef _Z_BG_JYA_BLOCK_H_
#define _Z_BG_JYA_BLOCK_H_

#include "global.hpp"

struct BgJyaBlock;

typedef struct BgJyaBlock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgJyaBlock; // size = 0x1C0

extern ActorInit Bg_Jya_Block_InitVars;

#endif
