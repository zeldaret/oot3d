#ifndef _Z_EN_COW_H_
#define _Z_EN_COW_H_

#include "global.hpp"

struct EnCow;

typedef struct EnCow {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x618];
} EnCow; // size = 0x7BC

extern ActorInit En_Cow_InitVars;

#endif
