#ifndef _Z_BOSS_FD2_H_
#define _Z_BOSS_FD2_H_

#include "global.hpp"

struct BossFd2;

typedef struct BossFd2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9D8];
} BossFd2; // size = 0xB7C

extern ActorInit Boss_Fd2_InitVars;

#endif
