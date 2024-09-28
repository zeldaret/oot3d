#ifndef _Z_EN_MU_H_
#define _Z_EN_MU_H_

#include "global.hpp"

struct EnMu;

typedef struct EnMu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x490];
} EnMu; // size = 0x634

extern ActorInit En_Mu_InitVars;

#endif
