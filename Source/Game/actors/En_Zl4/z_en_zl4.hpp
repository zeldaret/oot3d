#ifndef _Z_EN_ZL4_H_
#define _Z_EN_ZL4_H_

#include "global.hpp"

struct EnZl4;

typedef struct EnZl4 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD8C];
} EnZl4; // size = 0xF30

extern ActorInit En_Zl4_InitVars;

#endif
