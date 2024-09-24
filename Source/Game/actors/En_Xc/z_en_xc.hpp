#ifndef _Z_EN_XC_H_
#define _Z_EN_XC_H_

#include "global.hpp"

struct EnXc;

typedef struct EnXc {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAFC];
} EnXc; // size = 0xCA0

extern ActorInit En_Xc_InitVars;

#endif
