#ifndef _Z_BG_MORI_BIGST_H_
#define _Z_BG_MORI_BIGST_H_

#include "global.hpp"

struct BgMoriBigst;

typedef struct BgMoriBigst {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgMoriBigst; // size = 0x1C8

extern ActorInit Bg_Mori_Bigst_InitVars;

#endif
