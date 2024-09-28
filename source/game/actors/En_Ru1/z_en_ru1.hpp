#ifndef _Z_EN_RU1_H_
#define _Z_EN_RU1_H_

#include "global.hpp"

struct EnRu1;

typedef struct EnRu1 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB68];
} EnRu1; // size = 0xD0C

extern ActorInit En_Ru1_InitVars;

#endif
