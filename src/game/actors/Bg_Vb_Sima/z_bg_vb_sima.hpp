#ifndef _Z_BG_VB_SIMA_H_
#define _Z_BG_VB_SIMA_H_

#include "global.hpp"

struct BgVbSima;

typedef struct BgVbSima {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgVbSima; // size = 0x1D8

extern ActorInit Bg_Vb_Sima_InitVars;

#endif
