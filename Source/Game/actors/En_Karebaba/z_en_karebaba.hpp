#ifndef _Z_EN_KAREBABA_H_
#define _Z_EN_KAREBABA_H_

#include "global.hpp"

struct EnKarebaba;

typedef struct EnKarebaba {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28C];
} EnKarebaba; // size = 0x430

extern ActorInit En_Karebaba_InitVars;

#endif
