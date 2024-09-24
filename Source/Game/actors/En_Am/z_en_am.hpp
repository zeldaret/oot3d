#ifndef _Z_EN_AM_H_
#define _Z_EN_AM_H_

#include "global.hpp"

struct EnAm;

typedef struct EnAm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x404];
} EnAm; // size = 0x5A8

extern ActorInit En_Am_InitVars;

#endif
