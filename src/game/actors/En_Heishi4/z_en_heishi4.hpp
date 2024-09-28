#ifndef _Z_EN_HEISHI4_H_
#define _Z_EN_HEISHI4_H_

#include "global.hpp"

struct EnHeishi4;

typedef struct EnHeishi4 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C0];
} EnHeishi4; // size = 0x964

extern ActorInit En_Heishi4_InitVars;

#endif
