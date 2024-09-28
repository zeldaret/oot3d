#ifndef _Z_EN_FD_FIRE_H_
#define _Z_EN_FD_FIRE_H_

#include "global.hpp"

struct EnFdFire;

typedef struct EnFdFire {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x78];
} EnFdFire; // size = 0x21C

extern ActorInit En_Fd_Fire_InitVars;

#endif
