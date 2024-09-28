#ifndef _Z_EN_BDFIRE_H_
#define _Z_EN_BDFIRE_H_

#include "global.hpp"

struct EnBdfire;

typedef struct EnBdfire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x55C];
} EnBdfire; // size = 0x700

extern ActorInit En_Bdfire_InitVars;

#endif
