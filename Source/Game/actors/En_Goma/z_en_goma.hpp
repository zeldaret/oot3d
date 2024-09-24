#ifndef _Z_EN_GOMA_H_
#define _Z_EN_GOMA_H_

#include "global.hpp"

struct EnGoma;

typedef struct EnGoma {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x678];
} EnGoma; // size = 0x81C

extern ActorInit En_Goma_InitVars;

#endif
