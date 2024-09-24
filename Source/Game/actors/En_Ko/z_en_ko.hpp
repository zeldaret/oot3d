#ifndef _Z_EN_KO_H_
#define _Z_EN_KO_H_

#include "global.hpp"

struct EnKo;

typedef struct EnKo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB04];
} EnKo; // size = 0xCA8

extern ActorInit En_Ko_InitVars;

#endif
