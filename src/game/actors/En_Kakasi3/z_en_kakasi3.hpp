#ifndef _Z_EN_KAKASI3_H_
#define _Z_EN_KAKASI3_H_

#include "global.hpp"

struct EnKakasi3;

typedef struct EnKakasi3 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10C];
} EnKakasi3; // size = 0x2B0

extern ActorInit En_Kakasi3_InitVars;

#endif
