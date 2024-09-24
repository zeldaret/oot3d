#ifndef _Z_EN_PART_H_
#define _Z_EN_PART_H_

#include "global.hpp"

struct EnPart;

typedef struct EnPart {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x78];
} EnPart; // size = 0x21C

extern ActorInit En_Part_InitVars;

#endif
