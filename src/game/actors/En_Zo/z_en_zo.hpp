#ifndef _Z_EN_ZO_H_
#define _Z_EN_ZO_H_

#include "global.hpp"

struct EnZo;

typedef struct EnZo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF20];
} EnZo; // size = 0x10C4

extern ActorInit En_Zo_InitVars;

#endif
