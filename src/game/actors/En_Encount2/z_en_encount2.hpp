#ifndef _Z_EN_ENCOUNT2_H_
#define _Z_EN_ENCOUNT2_H_

#include "global.hpp"

struct EnEncount2;

typedef struct EnEncount2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5DC];
} EnEncount2; // size = 0x780

extern ActorInit En_Encount2_InitVars;

#endif
