#ifndef _Z_ARROW_FIRE_H_
#define _Z_ARROW_FIRE_H_

#include "global.hpp"

struct ArrowFire;

typedef struct ArrowFire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} ArrowFire; // size = 0x1C8

extern ActorInit Arrow_Fire_InitVars;

#endif
