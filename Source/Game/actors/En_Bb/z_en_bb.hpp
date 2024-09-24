#ifndef _Z_EN_BB_H_
#define _Z_EN_BB_H_

#include "global.hpp"

struct EnBb;

typedef struct EnBb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x464];
} EnBb; // size = 0x608

extern ActorInit En_Bb_InitVars;

#endif
