#ifndef _Z_ARROW_ICE_H_
#define _Z_ARROW_ICE_H_

#include "global.hpp"

struct ArrowIce;

typedef struct ArrowIce {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} ArrowIce; // size = 0x1CC

extern ActorInit Arrow_Ice_InitVars;

#endif
