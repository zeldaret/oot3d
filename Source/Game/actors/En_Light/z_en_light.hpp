#ifndef _Z_EN_LIGHT_H_
#define _Z_EN_LIGHT_H_

#include "global.hpp"

struct EnLight;

typedef struct EnLight {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} EnLight; // size = 0x1CC

extern ActorInit En_Light_InitVars;

#endif
