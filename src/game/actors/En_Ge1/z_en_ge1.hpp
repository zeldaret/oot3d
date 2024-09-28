#ifndef _Z_EN_GE1_H_
#define _Z_EN_GE1_H_

#include "global.hpp"

struct EnGe1;

typedef struct EnGe1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8E4];
} EnGe1; // size = 0xA88

extern ActorInit En_Ge1_InitVars;

#endif
