#ifndef _Z_EN_JJ_H_
#define _Z_EN_JJ_H_

#include "global.hpp"

struct EnJj;

typedef struct EnJj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7B8];
} EnJj; // size = 0x95C

extern ActorInit En_Jj_InitVars;

#endif
