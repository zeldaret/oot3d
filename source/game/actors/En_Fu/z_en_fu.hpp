#ifndef _Z_EN_FU_H_
#define _Z_EN_FU_H_

#include "global.hpp"

struct EnFu;

typedef struct EnFu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x870];
} EnFu; // size = 0xA14

extern ActorInit En_Fu_InitVars;

#endif
