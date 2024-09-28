#ifndef _Z_EN_HEISHI1_H_
#define _Z_EN_HEISHI1_H_

#include "global.hpp"

struct EnHeishi1;

typedef struct EnHeishi1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x75C];
} EnHeishi1; // size = 0x900

extern ActorInit En_Heishi1_InitVars;

#endif
