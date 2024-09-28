#ifndef _Z_EN_EX_RUPPY_H_
#define _Z_EN_EX_RUPPY_H_

#include "global.hpp"

struct EnExRuppy;

typedef struct EnExRuppy {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} EnExRuppy; // size = 0x1C0

extern ActorInit En_Ex_Ruppy_InitVars;

#endif
