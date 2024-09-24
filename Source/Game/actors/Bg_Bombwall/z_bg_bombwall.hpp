#ifndef _Z_BG_BOMBWALL_H_
#define _Z_BG_BOMBWALL_H_

#include "global.hpp"

struct BgBombwall;

typedef struct BgBombwall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x164];
} BgBombwall; // size = 0x308

extern ActorInit Bg_Bombwall_InitVars;

#endif
