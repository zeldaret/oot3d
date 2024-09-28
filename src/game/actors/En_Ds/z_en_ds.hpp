#ifndef _Z_EN_DS_H_
#define _Z_EN_DS_H_

#include "global.hpp"

struct EnDs;

typedef struct EnDs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x2A8];
} EnDs; // size = 0x44C

extern ActorInit En_Ds_InitVars;

#endif
