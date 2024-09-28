#ifndef _Z_EN_TA_H_
#define _Z_EN_TA_H_

#include "global.hpp"

struct EnTa;

typedef struct EnTa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAA0];
} EnTa; // size = 0xC44

extern ActorInit En_Ta_InitVars;

#endif
