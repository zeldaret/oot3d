#ifndef _Z_EN_MB_H_
#define _Z_EN_MB_H_

#include "global.hpp"

struct EnMb;

typedef struct EnMb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA08];
} EnMb; // size = 0xBAC

extern ActorInit En_Mb_InitVars;

#endif
