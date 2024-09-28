#ifndef _Z_ACTOR_1D8_H_
#define _Z_ACTOR_1D8_H_

#include "global.hpp"

struct Actor1D8;

typedef struct Actor1D8 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x40C];
} Actor1D8; // size = 0x5B0

extern ActorInit Actor_1D8_InitVars;

#endif
