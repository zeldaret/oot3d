#ifndef _Z_BG_HAKA_SGAMI_H_
#define _Z_BG_HAKA_SGAMI_H_

#include "global.hpp"

struct BgHakaSgami;

typedef struct BgHakaSgami {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1FC];
} BgHakaSgami; // size = 0x3A0

extern ActorInit Bg_Haka_Sgami_InitVars;

#endif
