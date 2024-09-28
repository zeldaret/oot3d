#ifndef _Z_EN_ST_H_
#define _Z_EN_ST_H_

#include "global.hpp"

struct EnSt;

typedef struct EnSt {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7E0];
} EnSt; // size = 0x984

extern ActorInit En_St_InitVars;

#endif
