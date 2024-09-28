#ifndef _Z_EN_RU2_H_
#define _Z_EN_RU2_H_

#include "global.hpp"

struct EnRu2;

typedef struct EnRu2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xCC4];
} EnRu2; // size = 0xE68

extern ActorInit En_Ru2_InitVars;

#endif
