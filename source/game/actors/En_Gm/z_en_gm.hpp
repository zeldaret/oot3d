#ifndef _Z_EN_GM_H_
#define _Z_EN_GM_H_

#include "global.hpp"

struct EnGm;

typedef struct EnGm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA7C];
} EnGm; // size = 0xC20

extern ActorInit En_Gm_InitVars;

#endif
