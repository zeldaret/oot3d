#ifndef _Z_EN_GIRLA_H_
#define _Z_EN_GIRLA_H_

#include "global.hpp"

struct EnGirlA;

typedef struct EnGirlA {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5C];
} EnGirlA; // size = 0x200

extern ActorInit En_GirlA_InitVars;

#endif
