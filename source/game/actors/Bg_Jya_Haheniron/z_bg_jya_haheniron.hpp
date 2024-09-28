#ifndef _Z_BG_JYA_HAHENIRON_H_
#define _Z_BG_JYA_HAHENIRON_H_

#include "global.hpp"

struct BgJyaHaheniron;

typedef struct BgJyaHaheniron {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C];
} BgJyaHaheniron; // size = 0x220

extern ActorInit Bg_Jya_Haheniron_InitVars;

#endif
