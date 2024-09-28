#ifndef _Z_BG_PO_SYOKUDAI_H_
#define _Z_BG_PO_SYOKUDAI_H_

#include "global.hpp"

struct BgPoSyokudai;

typedef struct BgPoSyokudai {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x88];
} BgPoSyokudai; // size = 0x22C

extern ActorInit Bg_Po_Syokudai_InitVars;

#endif
