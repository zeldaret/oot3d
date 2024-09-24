#ifndef _Z_BG_JYA_ZURERUKABE_H_
#define _Z_BG_JYA_ZURERUKABE_H_

#include "global.hpp"

struct BgJyaZurerukabe;

typedef struct BgJyaZurerukabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgJyaZurerukabe; // size = 0x1CC

extern ActorInit Bg_Jya_Zurerukabe_InitVars;

#endif
