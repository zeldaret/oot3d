#ifndef _Z_EN_BOM_H_
#define _Z_EN_BOM_H_

#include "global.hpp"

struct EnBom;

typedef struct EnBom {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF0];
} EnBom; // size = 0x294

extern ActorInit En_Bom_InitVars;

#endif
