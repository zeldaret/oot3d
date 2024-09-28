#ifndef _Z_EN_HONOTRAP_H_
#define _Z_EN_HONOTRAP_H_

#include "global.hpp"

struct EnHonotrap;

typedef struct EnHonotrap {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10C];
} EnHonotrap; // size = 0x2B0

extern ActorInit En_Honotrap_InitVars;

#endif
