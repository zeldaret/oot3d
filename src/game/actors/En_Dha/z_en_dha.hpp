#ifndef _Z_EN_DHA_H_
#define _Z_EN_DHA_H_

#include "global.hpp"

struct EnDha;

typedef struct EnDha {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3AC];
} EnDha; // size = 0x550

extern ActorInit En_Dha_InitVars;

#endif
