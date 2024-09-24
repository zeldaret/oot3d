#ifndef _Z_EN_FW_H_
#define _Z_EN_FW_H_

#include "global.hpp"

struct EnFw;

typedef struct EnFw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x990];
} EnFw; // size = 0xB34

extern ActorInit En_Fw_InitVars;

#endif
