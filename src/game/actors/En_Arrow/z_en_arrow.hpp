#ifndef _Z_EN_ARROW_H_
#define _Z_EN_ARROW_H_

#include "global.hpp"

struct EnArrow;

typedef struct EnArrow {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x178];
} EnArrow; // size = 0x31C

extern ActorInit En_Arrow_InitVars;

#endif
