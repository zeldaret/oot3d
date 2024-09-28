#ifndef _Z_EN_MM_H_
#define _Z_EN_MM_H_

#include "global.hpp"

struct EnMm;

typedef struct EnMm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x93C];
} EnMm; // size = 0xAE0

extern ActorInit En_Mm_InitVars;

#endif
