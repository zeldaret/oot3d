#ifndef _Z_EN_SKJ_H_
#define _Z_EN_SKJ_H_

#include "global.hpp"

struct EnSkj;

typedef struct EnSkj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8A4];
} EnSkj; // size = 0xA48

extern ActorInit En_Skj_InitVars;

#endif
