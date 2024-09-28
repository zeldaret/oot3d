#ifndef _Z_ACTOR_1D7_H_
#define _Z_ACTOR_1D7_H_

#include "global.hpp"

struct Actor1D7;

typedef struct Actor1D7 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} Actor1D7; // size = 0x1D0

extern ActorInit Actor_1D7_InitVars;

#endif
