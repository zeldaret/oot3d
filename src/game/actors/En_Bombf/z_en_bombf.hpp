#ifndef _Z_EN_BOMBF_H_
#define _Z_EN_BOMBF_H_

#include "global.hpp"

struct EnBombf;

typedef struct EnBombf {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xEC];
} EnBombf; // size = 0x290

extern ActorInit En_Bombf_InitVars;

#endif
