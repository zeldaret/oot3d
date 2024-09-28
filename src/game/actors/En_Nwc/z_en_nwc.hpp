#ifndef _Z_EN_NWC_H_
#define _Z_EN_NWC_H_

#include "global.hpp"

struct EnNwc;

typedef struct EnNwc {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5E8];
} EnNwc; // size = 0x78C

extern ActorInit En_Nwc_InitVars;

#endif
