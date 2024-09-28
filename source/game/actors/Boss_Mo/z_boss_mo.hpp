#ifndef _Z_BOSS_MO_H_
#define _Z_BOSS_MO_H_

#include "global.hpp"

struct BossMo;

typedef struct BossMo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2E50];
} BossMo; // size = 0x2FF4

extern ActorInit Boss_Mo_InitVars;

#endif
