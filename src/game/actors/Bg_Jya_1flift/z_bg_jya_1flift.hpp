#ifndef _Z_BG_JYA_1FLIFT_H_
#define _Z_BG_JYA_1FLIFT_H_

#include "global.hpp"

struct BgJya1flift;

typedef struct BgJya1flift {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x80];
} BgJya1flift; // size = 0x224

extern ActorInit Bg_Jya_1flift_InitVars;

#endif
