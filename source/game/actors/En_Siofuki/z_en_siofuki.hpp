#ifndef _Z_EN_SIOFUKI_H_
#define _Z_EN_SIOFUKI_H_

#include "global.hpp"

struct EnSiofuki;

typedef struct EnSiofuki {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x68];
} EnSiofuki; // size = 0x20C

extern ActorInit En_Siofuki_InitVars;

#endif
