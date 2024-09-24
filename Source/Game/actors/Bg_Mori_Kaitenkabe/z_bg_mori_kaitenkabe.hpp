#ifndef _Z_BG_MORI_KAITENKABE_H_
#define _Z_BG_MORI_KAITENKABE_H_

#include "global.hpp"

struct BgMoriKaitenkabe;

typedef struct BgMoriKaitenkabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x40];
} BgMoriKaitenkabe; // size = 0x1E4

extern ActorInit Bg_Mori_Kaitenkabe_InitVars;

#endif
