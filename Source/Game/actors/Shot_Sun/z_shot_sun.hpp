#ifndef _Z_SHOT_SUN_H_
#define _Z_SHOT_SUN_H_

#include "global.hpp"

struct ShotSun;

typedef struct ShotSun {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6C];
} ShotSun; // size = 0x210

extern ActorInit Shot_Sun_InitVars;

#endif
