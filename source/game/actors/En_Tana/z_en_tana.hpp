#ifndef _Z_EN_TANA_H_
#define _Z_EN_TANA_H_

#include "global.hpp"

struct EnTana;

typedef struct EnTana {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} EnTana; // size = 0x1A8

extern ActorInit En_Tana_InitVars;

#endif
