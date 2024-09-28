#ifndef _Z_BG_JYA_GOROIWA_H_
#define _Z_BG_JYA_GOROIWA_H_

#include "global.hpp"

struct BgJyaGoroiwa;

typedef struct BgJyaGoroiwa {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x84];
} BgJyaGoroiwa; // size = 0x228

extern ActorInit Bg_Jya_Goroiwa_InitVars;

#endif
