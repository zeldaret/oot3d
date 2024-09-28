#ifndef _Z_EN_SB_H_
#define _Z_EN_SB_H_

#include "global.hpp"

struct EnSb;

typedef struct EnSb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x104];
} EnSb; // size = 0x2A8

extern ActorInit En_Sb_InitVars;

#endif
