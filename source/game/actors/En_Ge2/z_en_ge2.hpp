#ifndef _Z_EN_GE2_H_
#define _Z_EN_GE2_H_

#include "global.hpp"

struct EnGe2;

typedef struct EnGe2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9BC];
} EnGe2; // size = 0xB60

extern ActorInit En_Ge2_InitVars;

#endif
