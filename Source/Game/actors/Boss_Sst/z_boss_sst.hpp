#ifndef _Z_BOSS_SST_H_
#define _Z_BOSS_SST_H_

#include "global.hpp"

struct BossSst;

typedef struct BossSst {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1940];
} BossSst; // size = 0x1AE4

extern ActorInit Boss_Sst_InitVars;

#endif
