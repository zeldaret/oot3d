#ifndef _Z_BOSS_VA_H_
#define _Z_BOSS_VA_H_

#include "global.hpp"

struct BossVa;

typedef struct BossVa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1100];
} BossVa; // size = 0x12A4

extern ActorInit Boss_Va_InitVars;

#endif
