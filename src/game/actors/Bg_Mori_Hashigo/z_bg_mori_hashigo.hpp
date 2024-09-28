#ifndef _Z_BG_MORI_HASHIGO_H_
#define _Z_BG_MORI_HASHIGO_H_

#include "global.hpp"

struct BgMoriHashigo;

typedef struct BgMoriHashigo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9C];
} BgMoriHashigo; // size = 0x240

extern ActorInit Bg_Mori_Hashigo_InitVars;

#endif
