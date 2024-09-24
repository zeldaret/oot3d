#ifndef _Z_EN_FR_H_
#define _Z_EN_FR_H_

#include "global.hpp"

struct EnFr;

typedef struct EnFr {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xCAC];
} EnFr; // size = 0xE50

extern ActorInit En_Fr_InitVars;

#endif
