#ifndef _Z_EN_DODOJR_H_
#define _Z_EN_DODOJR_H_

#include "global.hpp"

struct EnDodojr;

typedef struct EnDodojr {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x37C];
} EnDodojr; // size = 0x520

extern ActorInit En_Dodojr_InitVars;

#endif
