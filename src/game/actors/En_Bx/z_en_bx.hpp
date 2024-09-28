#ifndef _Z_EN_BX_H_
#define _Z_EN_BX_H_

#include "global.hpp"

struct EnBx;

typedef struct EnBx {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5E0];
} EnBx; // size = 0x784

extern ActorInit En_Bx_InitVars;

#endif
