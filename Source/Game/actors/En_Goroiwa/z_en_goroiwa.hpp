#ifndef _Z_EN_GOROIWA_H_
#define _Z_EN_GOROIWA_H_

#include "global.hpp"

struct EnGoroiwa;

typedef struct EnGoroiwa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9C];
} EnGoroiwa; // size = 0x240

extern ActorInit En_Goroiwa_InitVars;

#endif
