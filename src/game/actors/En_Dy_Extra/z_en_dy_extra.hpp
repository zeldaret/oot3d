#ifndef _Z_EN_DY_EXTRA_H_
#define _Z_EN_DY_EXTRA_H_

#include "global.hpp"

struct EnDyExtra;

typedef struct EnDyExtra {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2C];
} EnDyExtra; // size = 0x1D0

extern ActorInit En_Dy_Extra_InitVars;

#endif
