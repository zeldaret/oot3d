#ifndef _Z_BG_BOWL_WALL_H_
#define _Z_BG_BOWL_WALL_H_

#include "global.hpp"

struct BgBowlWall;

typedef struct BgBowlWall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x40];
} BgBowlWall; // size = 0x1E4

extern ActorInit Bg_Bowl_Wall_InitVars;

#endif
