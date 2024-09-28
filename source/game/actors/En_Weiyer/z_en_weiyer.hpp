#ifndef _Z_EN_WEIYER_H_
#define _Z_EN_WEIYER_H_

#include "global.hpp"

struct EnWeiyer;

typedef struct EnWeiyer {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x69C];
} EnWeiyer; // size = 0x840

extern ActorInit En_Weiyer_InitVars;

#endif
