#ifndef _Z_BOSS_GANON2_H_
#define _Z_BOSS_GANON2_H_

#include "global.hpp"

struct BossGanon2;

typedef struct BossGanon2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF68];
} BossGanon2; // size = 0x110C

extern ActorInit Boss_Ganon2_InitVars;

#endif
