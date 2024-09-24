#ifndef _Z_BG_INGATE_H_
#define _Z_BG_INGATE_H_

#include "global.hpp"

struct BgIngate;

typedef struct BgIngate {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgIngate; // size = 0x1C4

extern ActorInit Bg_Ingate_InitVars;

#endif
