#ifndef _Z_BG_MORI_HASHIRA4_H_
#define _Z_BG_MORI_HASHIRA4_H_

#include "global.hpp"

struct BgMoriHashira4;

typedef struct BgMoriHashira4 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgMoriHashira4; // size = 0x1CC

extern ActorInit Bg_Mori_Hashira4_InitVars;

#endif
