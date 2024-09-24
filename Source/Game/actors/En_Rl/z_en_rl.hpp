#ifndef _Z_EN_RL_H_
#define _Z_EN_RL_H_

#include "global.hpp"

struct EnRl;

typedef struct EnRl {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xBC8];
} EnRl; // size = 0xD6C

extern ActorInit En_Rl_InitVars;

#endif
