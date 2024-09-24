#ifndef _Z_EN_IT_H_
#define _Z_EN_IT_H_

#include "global.hpp"

struct EnIt;

typedef struct EnIt {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5C];
} EnIt; // size = 0x200

extern ActorInit En_It_InitVars;

#endif
