#ifndef _Z_EN_FZ_H_
#define _Z_EN_FZ_H_

#include "global.hpp"

struct EnFz;

typedef struct EnFz {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1238];
} EnFz; // size = 0x13DC

extern ActorInit En_Fz_InitVars;

#endif
