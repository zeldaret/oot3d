#ifndef _Z_EN_GELDB_H_
#define _Z_EN_GELDB_H_

#include "global.hpp"

struct EnGeldB;

typedef struct EnGeldB {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC48];
} EnGeldB; // size = 0xDEC

extern ActorInit En_GeldB_InitVars;

#endif
