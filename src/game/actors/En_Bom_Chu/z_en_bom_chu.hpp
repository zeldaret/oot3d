#ifndef _Z_EN_BOM_CHU_H_
#define _Z_EN_BOM_CHU_H_

#include "global.hpp"

struct EnBomChu;

typedef struct EnBomChu {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xB0];
} EnBomChu; // size = 0x254

extern ActorInit En_Bom_Chu_InitVars;

#endif
