#ifndef _Z_EN_REEBA_H_
#define _Z_EN_REEBA_H_

#include "global.hpp"

struct EnReeba;

typedef struct EnReeba {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x378];
} EnReeba; // size = 0x51C

extern ActorInit En_Reeba_InitVars;

#endif
