#ifndef _Z_EN_HOLL_H_
#define _Z_EN_HOLL_H_

#include "global.hpp"

struct EnHoll;

typedef struct EnHoll {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} EnHoll; // size = 0x1B4

extern ActorInit En_Holl_InitVars;

#endif
