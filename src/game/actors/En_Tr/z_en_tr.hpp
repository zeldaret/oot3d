#ifndef _Z_EN_TR_H_
#define _Z_EN_TR_H_

#include "global.hpp"

struct EnTr;

typedef struct EnTr {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xCF4];
} EnTr; // size = 0xE98

extern ActorInit En_Tr_InitVars;

#endif
