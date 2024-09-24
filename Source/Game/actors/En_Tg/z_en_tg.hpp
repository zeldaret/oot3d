#ifndef _Z_EN_TG_H_
#define _Z_EN_TG_H_

#include "global.hpp"

struct EnTg;

typedef struct EnTg {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6C4];
} EnTg; // size = 0x868

extern ActorInit En_Tg_InitVars;

#endif
