#ifndef _Z_EN_RR_H_
#define _Z_EN_RR_H_

#include "global.hpp"

struct EnRr;

typedef struct EnRr {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x26AC];
} EnRr; // size = 0x2850

extern ActorInit En_Rr_InitVars;

#endif
