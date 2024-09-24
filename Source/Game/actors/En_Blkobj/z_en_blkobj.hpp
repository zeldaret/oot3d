#ifndef _Z_EN_BLKOBJ_H_
#define _Z_EN_BLKOBJ_H_

#include "global.hpp"

struct EnBlkobj;

typedef struct EnBlkobj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} EnBlkobj; // size = 0x1CC

extern ActorInit En_Blkobj_InitVars;

#endif
