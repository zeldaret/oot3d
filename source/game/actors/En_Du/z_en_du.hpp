#ifndef _Z_EN_DU_H_
#define _Z_EN_DU_H_

#include "global.hpp"

struct EnDu;

typedef struct EnDu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3D8];
} EnDu; // size = 0x57C

extern ActorInit En_Du_InitVars;

#endif
