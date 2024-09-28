#ifndef _Z_EN_MM2_H_
#define _Z_EN_MM2_H_

#include "global.hpp"

struct EnMm2;

typedef struct EnMm2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8E4];
} EnMm2; // size = 0xA88

extern ActorInit En_Mm2_InitVars;

#endif
