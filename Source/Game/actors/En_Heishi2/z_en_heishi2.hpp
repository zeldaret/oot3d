#ifndef _Z_EN_HEISHI2_H_
#define _Z_EN_HEISHI2_H_

#include "global.hpp"

struct EnHeishi2;

typedef struct EnHeishi2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x890];
} EnHeishi2; // size = 0xA34

extern ActorInit En_Heishi2_InitVars;

#endif
