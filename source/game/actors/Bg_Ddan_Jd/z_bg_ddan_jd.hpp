#ifndef _Z_BG_DDAN_JD_H_
#define _Z_BG_DDAN_JD_H_

#include "global.hpp"

struct BgDdanJd;

typedef struct BgDdanJd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgDdanJd; // size = 0x1CC

extern ActorInit Bg_Ddan_Jd_InitVars;

#endif
