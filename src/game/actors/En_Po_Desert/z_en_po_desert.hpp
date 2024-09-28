#ifndef _Z_EN_PO_DESERT_H_
#define _Z_EN_PO_DESERT_H_

#include "global.hpp"

struct EnPoDesert;

typedef struct EnPoDesert {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C8];
} EnPoDesert; // size = 0x96C

extern ActorInit En_Po_Desert_InitVars;

#endif
