#ifndef _Z_ARROW_LIGHT_H_
#define _Z_ARROW_LIGHT_H_

#include "global.hpp"

struct ArrowLight;

typedef struct ArrowLight {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} ArrowLight; // size = 0x1CC

extern ActorInit Arrow_Light_InitVars;

#endif
