#ifndef _Z_BOSS_GANON_H_
#define _Z_BOSS_GANON_H_

#include "global.hpp"

struct BossGanon;

typedef struct BossGanon {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10A0];
} BossGanon; // size = 0x1244

extern ActorInit Boss_Ganon_InitVars;

#endif
