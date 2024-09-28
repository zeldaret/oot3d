#ifndef _Z_EN_IN_H_
#define _Z_EN_IN_H_

#include "global.hpp"

struct EnIn;

typedef struct EnIn {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC90];
} EnIn; // size = 0xE34

extern ActorInit En_In_InitVars;

#endif
