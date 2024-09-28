#ifndef _Z_EN_BW_H_
#define _Z_EN_BW_H_

#include "global.hpp"

struct EnBw;

typedef struct EnBw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C8];
} EnBw; // size = 0x56C

extern ActorInit En_Bw_InitVars;

#endif
