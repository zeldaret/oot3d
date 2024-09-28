#ifndef _Z_EN_ZL3_H_
#define _Z_EN_ZL3_H_

#include "global.hpp"

struct EnZl3;

typedef struct EnZl3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF9C];
} EnZl3; // size = 0x1140

extern ActorInit En_Zl3_InitVars;

#endif
