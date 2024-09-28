#ifndef _Z_EN_HORSE_NORMAL_H_
#define _Z_EN_HORSE_NORMAL_H_

#include "global.hpp"

struct EnHorseNormal;

typedef struct EnHorseNormal {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1174];
} EnHorseNormal; // size = 0x1318

extern ActorInit En_Horse_Normal_InitVars;

#endif
