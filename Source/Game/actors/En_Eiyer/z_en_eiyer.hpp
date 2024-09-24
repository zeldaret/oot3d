#ifndef _Z_EN_EIYER_H_
#define _Z_EN_EIYER_H_

#include "global.hpp"

struct EnEiyer;

typedef struct EnEiyer {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6A4];
} EnEiyer; // size = 0x848

extern ActorInit En_Eiyer_InitVars;

#endif
