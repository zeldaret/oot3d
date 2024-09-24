#ifndef _Z_EN_EG_H_
#define _Z_EN_EG_H_

#include "global.hpp"

struct EnEg;

typedef struct EnEg {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} EnEg; // size = 0x1A8

extern ActorInit En_Eg_InitVars;

#endif
