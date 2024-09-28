#ifndef _Z_EN_WALL_TUBO_H_
#define _Z_EN_WALL_TUBO_H_

#include "global.hpp"

struct EnWallTubo;

typedef struct EnWallTubo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} EnWallTubo; // size = 0x1C8

extern ActorInit En_Wall_Tubo_InitVars;

#endif
