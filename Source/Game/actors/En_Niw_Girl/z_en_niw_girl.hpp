#ifndef _Z_EN_NIW_GIRL_H_
#define _Z_EN_NIW_GIRL_H_

#include "global.hpp"

struct EnNiwGirl;

typedef struct EnNiwGirl {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x984];
} EnNiwGirl; // size = 0xB28

extern ActorInit En_Niw_Girl_InitVars;

#endif
