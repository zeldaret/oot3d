#ifndef _Z_BG_MIZU_MOVEBG_H_
#define _Z_BG_MIZU_MOVEBG_H_

#include "global.hpp"

struct BgMizuMovebg;

typedef struct BgMizuMovebg {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x48];
} BgMizuMovebg; // size = 0x1EC

extern ActorInit Bg_Mizu_Movebg_InitVars;

#endif
