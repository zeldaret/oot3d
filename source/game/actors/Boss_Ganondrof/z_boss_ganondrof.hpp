#ifndef _Z_BOSS_GANONDROF_H_
#define _Z_BOSS_GANONDROF_H_

#include "global.hpp"

struct BossGanondrof;

typedef struct BossGanondrof {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x340];
} BossGanondrof; // size = 0x4E4

extern ActorInit Boss_Ganondrof_InitVars;

#endif
