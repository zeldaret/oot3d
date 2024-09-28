#ifndef _Z_EN_DH_H_
#define _Z_EN_DH_H_

#include "global.hpp"

struct EnDh;

typedef struct EnDh {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x794];
} EnDh; // size = 0x938

extern ActorInit En_Dh_InitVars;

#endif
