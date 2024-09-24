#ifndef _Z_MAGIC_FIRE_H_
#define _Z_MAGIC_FIRE_H_

#include "global.hpp"

struct MagicFire;

typedef struct MagicFire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x74];
} MagicFire; // size = 0x218

extern ActorInit Magic_Fire_InitVars;

#endif
