#ifndef _Z_EN_DOG_H_
#define _Z_EN_DOG_H_

#include "global.hpp"

struct EnDog;

typedef struct EnDog {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4A0];
} EnDog; // size = 0x644

extern ActorInit En_Dog_InitVars;

#endif
