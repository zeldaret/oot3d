#ifndef _Z_EN_BOOM_H_
#define _Z_EN_BOOM_H_

#include "global.hpp"

struct EnBoom;

typedef struct EnBoom {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xDC];
} EnBoom; // size = 0x280

extern ActorInit En_Boom_InitVars;

#endif
