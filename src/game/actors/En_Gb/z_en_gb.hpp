#ifndef _Z_EN_GB_H_
#define _Z_EN_GB_H_

#include "global.hpp"

struct EnGb;

typedef struct EnGb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6FC];
} EnGb; // size = 0x8A0

extern ActorInit En_Gb_InitVars;

#endif
