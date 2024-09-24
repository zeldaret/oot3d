#ifndef _Z_EN_TORCH2_H_
#define _Z_EN_TORCH2_H_

#include "global.hpp"

struct EnTorch2;

typedef struct EnTorch2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2904];
} EnTorch2; // size = 0x2AA8

extern ActorInit En_Torch2_InitVars;

#endif
