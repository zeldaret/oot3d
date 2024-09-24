#ifndef _Z_BOSS_GOMA_H_
#define _Z_BOSS_GOMA_H_

#include "global.hpp"

struct BossGoma;

typedef struct BossGoma {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xEB4];
} BossGoma; // size = 0x1058

extern ActorInit Boss_Goma_InitVars;

#endif
