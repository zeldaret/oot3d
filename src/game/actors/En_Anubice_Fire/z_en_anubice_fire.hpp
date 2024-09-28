#ifndef _Z_EN_ANUBICE_FIRE_H_
#define _Z_EN_ANUBICE_FIRE_H_

#include "global.hpp"

struct EnAnubiceFire;

typedef struct EnAnubiceFire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB8];
} EnAnubiceFire; // size = 0x25C

extern ActorInit En_Anubice_Fire_InitVars;

#endif
