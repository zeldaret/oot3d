#ifndef _Z_BG_YDAN_SP_H_
#define _Z_BG_YDAN_SP_H_

#include "global.hpp"

struct BgYdanSp;

typedef struct BgYdanSp {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x128];
} BgYdanSp; // size = 0x2CC

extern ActorInit Bg_Ydan_Sp_InitVars;

#endif
