#ifndef _Z_EN_ENCOUNT1_H_
#define _Z_EN_ENCOUNT1_H_

#include "global.hpp"

struct EnEncount1;

typedef struct EnEncount1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} EnEncount1; // size = 0x1CC

extern ActorInit En_Encount1_InitVars;

#endif
