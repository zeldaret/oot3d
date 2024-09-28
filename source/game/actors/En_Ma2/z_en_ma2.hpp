#ifndef _Z_EN_MA2_H_
#define _Z_EN_MA2_H_

#include "global.hpp"

struct EnMa2;

typedef struct EnMa2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x358];
} EnMa2; // size = 0x4FC

extern ActorInit En_Ma2_InitVars;

#endif
