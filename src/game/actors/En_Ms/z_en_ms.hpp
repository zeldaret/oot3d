#ifndef _Z_EN_MS_H_
#define _Z_EN_MS_H_

#include "global.hpp"

struct EnMs;

typedef struct EnMs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5C8];
} EnMs; // size = 0x76C

extern ActorInit En_Ms_InitVars;

#endif
