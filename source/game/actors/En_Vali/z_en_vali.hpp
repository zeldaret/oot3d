#ifndef _Z_EN_VALI_H_
#define _Z_EN_VALI_H_

#include "global.hpp"

struct EnVali;

typedef struct EnVali {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x724];
} EnVali; // size = 0x8C8

extern ActorInit En_Vali_InitVars;

#endif
