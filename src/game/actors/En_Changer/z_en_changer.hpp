#ifndef _Z_EN_CHANGER_H_
#define _Z_EN_CHANGER_H_

#include "global.hpp"

struct EnChanger;

typedef struct EnChanger {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} EnChanger; // size = 0x1C4

extern ActorInit En_Changer_InitVars;

#endif
