#ifndef _Z_EN_FD_H_
#define _Z_EN_FD_H_

#include "global.hpp"

struct EnFd;

typedef struct EnFd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2748];
} EnFd; // size = 0x28EC

extern ActorInit En_Fd_InitVars;

#endif
