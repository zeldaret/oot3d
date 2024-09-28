#ifndef _Z_EN_WOOD02_H_
#define _Z_EN_WOOD02_H_

#include "global.hpp"

struct EnWood02;

typedef struct EnWood02 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x70];
} EnWood02; // size = 0x214

extern ActorInit En_Wood02_InitVars;

#endif
