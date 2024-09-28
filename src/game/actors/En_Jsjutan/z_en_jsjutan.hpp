#ifndef _Z_EN_JSJUTAN_H_
#define _Z_EN_JSJUTAN_H_

#include "global.hpp"

struct EnJsjutan;

typedef struct EnJsjutan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x48];
} EnJsjutan; // size = 0x1EC

extern ActorInit En_Jsjutan_InitVars;

#endif
