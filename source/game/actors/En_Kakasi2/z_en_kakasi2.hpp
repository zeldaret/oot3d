#ifndef _Z_EN_KAKASI2_H_
#define _Z_EN_KAKASI2_H_

#include "global.hpp"

struct EnKakasi2;

typedef struct EnKakasi2 {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xFC];
} EnKakasi2; // size = 0x2A0

extern ActorInit En_Kakasi2_InitVars;

#endif
