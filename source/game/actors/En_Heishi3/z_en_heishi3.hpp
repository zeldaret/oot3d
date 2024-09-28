#ifndef _Z_EN_HEISHI3_H_
#define _Z_EN_HEISHI3_H_

#include "global.hpp"

struct EnHeishi3;

typedef struct EnHeishi3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x780];
} EnHeishi3; // size = 0x924

extern ActorInit En_Heishi3_InitVars;

#endif
