#ifndef _Z_EN_RD_H_
#define _Z_EN_RD_H_

#include "global.hpp"

struct EnRd;

typedef struct EnRd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x828];
} EnRd; // size = 0x9CC

extern ActorInit En_Rd_InitVars;

#endif
