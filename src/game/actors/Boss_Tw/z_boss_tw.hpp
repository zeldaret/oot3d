#ifndef _Z_BOSS_TW_H_
#define _Z_BOSS_TW_H_

#include "global.hpp"

struct BossTw;

typedef struct BossTw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6F0];
} BossTw; // size = 0x894

extern ActorInit Boss_Tw_InitVars;

#endif
