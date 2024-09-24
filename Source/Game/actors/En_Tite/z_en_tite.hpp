#ifndef _Z_EN_TITE_H_
#define _Z_EN_TITE_H_

#include "global.hpp"

struct EnTite;

typedef struct EnTite {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x55C];
} EnTite; // size = 0x700

extern ActorInit En_Tite_InitVars;

#endif
