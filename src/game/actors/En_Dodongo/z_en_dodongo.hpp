#ifndef _Z_EN_DODONGO_H_
#define _Z_EN_DODONGO_H_

#include "global.hpp"

struct EnDodongo;

typedef struct EnDodongo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC58];
} EnDodongo; // size = 0xDFC

extern ActorInit En_Dodongo_InitVars;

#endif
