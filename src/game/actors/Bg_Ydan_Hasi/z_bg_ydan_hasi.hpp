#ifndef _Z_BG_YDAN_HASI_H_
#define _Z_BG_YDAN_HASI_H_

#include "global.hpp"

struct BgYdanHasi;

typedef struct BgYdanHasi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x28];
} BgYdanHasi; // size = 0x1CC

extern ActorInit Bg_Ydan_Hasi_InitVars;

#endif
