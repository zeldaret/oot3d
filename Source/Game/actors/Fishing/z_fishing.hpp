#ifndef _Z_FISHING_H_
#define _Z_FISHING_H_

#include "global.hpp"

struct Fishing;

typedef struct Fishing {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xADC];
} Fishing; // size = 0xC80

extern ActorInit Fishing_InitVars;

#endif
