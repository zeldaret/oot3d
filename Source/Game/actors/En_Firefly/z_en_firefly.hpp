#ifndef _Z_EN_FIREFLY_H_
#define _Z_EN_FIREFLY_H_

#include "global.hpp"

struct EnFirefly;

typedef struct EnFirefly {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x610];
} EnFirefly; // size = 0x7B4

extern ActorInit En_Firefly_InitVars;

#endif
