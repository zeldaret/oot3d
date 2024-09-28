#ifndef _Z_EN_FHG_FIRE_H_
#define _Z_EN_FHG_FIRE_H_

#include "global.hpp"

struct EnFhgFire;

typedef struct EnFhgFire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xE4];
} EnFhgFire; // size = 0x288

extern ActorInit En_Fhg_Fire_InitVars;

#endif
