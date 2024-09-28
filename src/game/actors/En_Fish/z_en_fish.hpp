#ifndef _Z_EN_FISH_H_
#define _Z_EN_FISH_H_

#include "global.hpp"

struct EnFish;

typedef struct EnFish {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x444];
} EnFish; // size = 0x5E8

extern ActorInit En_Fish_InitVars;

#endif
