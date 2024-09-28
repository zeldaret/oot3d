#ifndef _Z_EN_TORCH_H_
#define _Z_EN_TORCH_H_

#include "global.hpp"

struct EnTorch;

typedef struct EnTorch {
    /* 0x0000 */ Actor actor;
} EnTorch; // size = 0x1A4

extern ActorInit En_Torch_InitVars;

#endif
