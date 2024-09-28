#ifndef _Z_EN_HY_H_
#define _Z_EN_HY_H_

#include "global.hpp"

struct EnHy;

typedef struct EnHy {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xEDC];
} EnHy; // size = 0x1080

extern ActorInit En_Hy_InitVars;

#endif
