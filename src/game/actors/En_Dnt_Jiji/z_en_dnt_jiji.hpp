#ifndef _Z_EN_DNT_JIJI_H_
#define _Z_EN_DNT_JIJI_H_

#include "global.hpp"

struct EnDntJiji;

typedef struct EnDntJiji {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x754];
} EnDntJiji; // size = 0x8F8

extern ActorInit En_Dnt_Jiji_InitVars;

#endif
