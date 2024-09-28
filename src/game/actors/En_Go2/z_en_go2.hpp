#ifndef _Z_EN_GO2_H_
#define _Z_EN_GO2_H_

#include "global.hpp"

struct EnGo2;

typedef struct EnGo2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD64];
} EnGo2; // size = 0xF08

extern ActorInit En_Go2_InitVars;

#endif
