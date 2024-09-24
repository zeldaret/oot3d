#ifndef _Z_EN_KAKASI_H_
#define _Z_EN_KAKASI_H_

#include "global.hpp"

struct EnKakasi;

typedef struct EnKakasi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10C];
} EnKakasi; // size = 0x2B0

extern ActorInit En_Kakasi_InitVars;

#endif
