#ifndef _Z_EN_ZL1_H_
#define _Z_EN_ZL1_H_

#include "global.hpp"

struct EnZl1;

typedef struct EnZl1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2E0];
} EnZl1; // size = 0x484

extern ActorInit En_Zl1_InitVars;

#endif
