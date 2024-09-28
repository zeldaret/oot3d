#ifndef _Z_EN_M_THUNDER_H_
#define _Z_EN_M_THUNDER_H_

#include "global.hpp"

struct EnMThunder;

typedef struct EnMThunder {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB0];
} EnMThunder; // size = 0x254

extern ActorInit En_M_Thunder_InitVars;

#endif
