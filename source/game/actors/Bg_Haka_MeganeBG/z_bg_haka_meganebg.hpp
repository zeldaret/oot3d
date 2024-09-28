#ifndef _Z_BG_HAKA_MEGANEBG_H_
#define _Z_BG_HAKA_MEGANEBG_H_

#include "global.hpp"

struct BgHakaMeganeBG;

typedef struct BgHakaMeganeBG {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x34];
} BgHakaMeganeBG; // size = 0x1D8

extern ActorInit Bg_Haka_MeganeBG_InitVars;

#endif
