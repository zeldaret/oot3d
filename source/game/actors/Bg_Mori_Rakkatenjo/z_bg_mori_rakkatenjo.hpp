#ifndef _Z_BG_MORI_RAKKATENJO_H_
#define _Z_BG_MORI_RAKKATENJO_H_

#include "global.hpp"

struct BgMoriRakkatenjo;

typedef struct BgMoriRakkatenjo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x30];
} BgMoriRakkatenjo; // size = 0x1D4

extern ActorInit Bg_Mori_Rakkatenjo_InitVars;

#endif
