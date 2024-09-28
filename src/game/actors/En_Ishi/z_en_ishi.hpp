#ifndef _Z_EN_ISHI_H_
#define _Z_EN_ISHI_H_

#include "global.hpp"

struct EnIshi;

typedef struct EnIshi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x60];
} EnIshi; // size = 0x204

extern ActorInit En_Ishi_InitVars;

#endif
