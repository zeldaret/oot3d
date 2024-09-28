#ifndef _Z_EN_ZL2_H_
#define _Z_EN_ZL2_H_

#include "global.hpp"

struct EnZl2;

typedef struct EnZl2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x494];
} EnZl2; // size = 0x638

extern ActorInit En_Zl2_InitVars;

#endif
