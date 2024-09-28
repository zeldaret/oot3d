#ifndef _Z_EN_NUTSBALL_H_
#define _Z_EN_NUTSBALL_H_

#include "global.hpp"

struct EnNutsball;

typedef struct EnNutsball {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x64];
} EnNutsball; // size = 0x208

extern ActorInit En_Nutsball_InitVars;

#endif
