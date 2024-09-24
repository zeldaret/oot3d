#ifndef _Z_BG_HAKA_H_
#define _Z_BG_HAKA_H_

#include "global.hpp"

struct BgHaka;

typedef struct BgHaka {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgHaka; // size = 0x1CC

extern ActorInit Bg_Haka_InitVars;

#endif
