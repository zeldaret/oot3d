#ifndef _Z_EN_SYATEKI_ITM_H_
#define _Z_EN_SYATEKI_ITM_H_

#include "global.hpp"

struct EnSyatekiItm;

typedef struct EnSyatekiItm {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8C];
} EnSyatekiItm; // size = 0x230

extern ActorInit En_Syateki_Itm_InitVars;

#endif
