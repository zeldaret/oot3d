#ifndef _Z_BOSS_FD_H_
#define _Z_BOSS_FD_H_

#include "global.hpp"

struct BossFd;

typedef struct BossFd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x483C];
} BossFd; // size = 0x49E0

extern ActorInit Boss_Fd_InitVars;

#endif
