#ifndef _Z_EN_INSECT_H_
#define _Z_EN_INSECT_H_

#include "global.hpp"

struct EnInsect;

typedef struct EnInsect {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4B8];
} EnInsect; // size = 0x65C

extern ActorInit En_Insect_InitVars;

#endif
