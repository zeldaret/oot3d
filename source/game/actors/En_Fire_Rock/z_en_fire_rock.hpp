#ifndef _Z_EN_FIRE_ROCK_H_
#define _Z_EN_FIRE_ROCK_H_

#include "global.hpp"

struct EnFireRock;

typedef struct EnFireRock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA4];
} EnFireRock; // size = 0x248

extern ActorInit En_Fire_Rock_InitVars;

#endif
