#ifndef _Z_EN_MA3_H_
#define _Z_EN_MA3_H_

#include "global.hpp"

struct EnMa3;

typedef struct EnMa3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2E0];
} EnMa3; // size = 0x484

extern ActorInit En_Ma3_InitVars;

#endif
