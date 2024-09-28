#ifndef _Z_DEMO_6K_H_
#define _Z_DEMO_6K_H_

#include "global.hpp"

struct Demo6K;

typedef struct Demo6K {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1CC];
} Demo6K; // size = 0x370

extern ActorInit Demo_6K_InitVars;

#endif
