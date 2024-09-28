#ifndef _Z_BG_JYA_BIGMIRROR_H_
#define _Z_BG_JYA_BIGMIRROR_H_

#include "global.hpp"

struct BgJyaBigmirror;

typedef struct BgJyaBigmirror {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3C];
} BgJyaBigmirror; // size = 0x1E0

extern ActorInit Bg_Jya_Bigmirror_InitVars;

#endif
