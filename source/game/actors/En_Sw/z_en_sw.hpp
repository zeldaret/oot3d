#ifndef _Z_EN_SW_H_
#define _Z_EN_SW_H_

#include "global.hpp"

struct EnSw;

typedef struct EnSw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x68C];
} EnSw; // size = 0x830

extern ActorInit En_Sw_InitVars;

#endif
