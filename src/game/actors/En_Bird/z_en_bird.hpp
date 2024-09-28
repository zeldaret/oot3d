#ifndef _Z_EN_BIRD_H_
#define _Z_EN_BIRD_H_

#include "global.hpp"

struct EnBird;

typedef struct EnBird {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4C];
} EnBird; // size = 0x1F0

extern ActorInit En_Bird_InitVars;

#endif
