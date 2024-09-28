#ifndef _Z_EN_STH_H_
#define _Z_EN_STH_H_

#include "global.hpp"

struct EnSth;

typedef struct EnSth {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x100];
} EnSth; // size = 0x2A4

extern ActorInit En_Sth_InitVars;

#endif
