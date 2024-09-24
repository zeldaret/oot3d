#ifndef _Z_EN_MA1_H_
#define _Z_EN_MA1_H_

#include "global.hpp"

struct EnMa1;

typedef struct EnMa1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA94];
} EnMa1; // size = 0xC38

extern ActorInit En_Ma1_InitVars;

#endif
