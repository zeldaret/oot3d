#ifndef _Z_EN_HS_H_
#define _Z_EN_HS_H_

#include "global.hpp"

struct EnHs;

typedef struct EnHs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x570];
} EnHs; // size = 0x714

extern ActorInit En_Hs_InitVars;

#endif
