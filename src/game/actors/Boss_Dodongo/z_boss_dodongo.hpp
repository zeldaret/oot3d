#ifndef _Z_BOSS_DODONGO_H_
#define _Z_BOSS_DODONGO_H_

#include "global.hpp"

struct BossDodongo;

typedef struct BossDodongo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1EC8];
} BossDodongo; // size = 0x206C

extern ActorInit Boss_Dodongo_InitVars;

#endif
