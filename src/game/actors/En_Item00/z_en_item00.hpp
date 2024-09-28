#ifndef _Z_EN_ITEM00_H_
#define _Z_EN_ITEM00_H_

#include "global.hpp"

struct EnItem00;

typedef struct EnItem00 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x74];
} EnItem00; // size = 0x218

extern ActorInit En_Item00_InitVars;

#endif
