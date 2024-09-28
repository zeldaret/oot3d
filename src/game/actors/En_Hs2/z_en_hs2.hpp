#ifndef _Z_EN_HS2_H_
#define _Z_EN_HS2_H_

#include "global.hpp"

struct EnHs2;

typedef struct EnHs2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x570];
} EnHs2; // size = 0x714

extern ActorInit En_Hs2_InitVars;

#endif
