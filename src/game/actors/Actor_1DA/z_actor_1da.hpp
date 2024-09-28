#ifndef _Z_ACTOR_1DA_H_
#define _Z_ACTOR_1DA_H_

#include "global.hpp"

struct Actor1DA;

typedef struct Actor1DA {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x01BC */ char unk_1BC[0x4];
} Actor1DA; // size = 0x1C0

extern ActorInit Actor_1DA_InitVars;

#endif
