#ifndef _Z_BG_JYA_COBRA_H_
#define _Z_BG_JYA_COBRA_H_

#include "global.hpp"

struct BgJyaCobra;

typedef struct BgJyaCobra {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x21F0];
} BgJyaCobra; // size = 0x2394

extern ActorInit Bg_Jya_Cobra_InitVars;

#endif
