#ifndef _Z_BG_MORI_HINERI_H_
#define _Z_BG_MORI_HINERI_H_

#include "global.hpp"

struct BgMoriHineri;

typedef struct BgMoriHineri {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xBC];
} BgMoriHineri; // size = 0x260

extern ActorInit Bg_Mori_Hineri_InitVars;

#endif
