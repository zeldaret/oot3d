#ifndef _Z_EN_KUSA_H_
#define _Z_EN_KUSA_H_

#include "global.hpp"

struct EnKusa;

typedef struct EnKusa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6C];
} EnKusa; // size = 0x210

extern ActorInit En_Kusa_InitVars;

#endif
