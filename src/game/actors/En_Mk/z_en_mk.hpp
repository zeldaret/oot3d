#ifndef _Z_EN_MK_H_
#define _Z_EN_MK_H_

#include "global.hpp"

struct EnMk;

typedef struct EnMk {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6A0];
} EnMk; // size = 0x844

extern ActorInit En_Mk_InitVars;

#endif
