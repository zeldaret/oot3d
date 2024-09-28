#ifndef _Z_EN_M_FIRE1_H_
#define _Z_EN_M_FIRE1_H_

#include "global.hpp"

struct EnMFire1;

typedef struct EnMFire1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5C];
} EnMFire1; // size = 0x200

extern ActorInit En_M_Fire1_InitVars;

#endif
