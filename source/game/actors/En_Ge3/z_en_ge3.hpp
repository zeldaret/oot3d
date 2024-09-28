#ifndef _Z_EN_GE3_H_
#define _Z_EN_GE3_H_

#include "global.hpp"

struct EnGe3;

typedef struct EnGe3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA7C];
} EnGe3; // size = 0xC20

extern ActorInit En_Ge3_InitVars;

#endif
