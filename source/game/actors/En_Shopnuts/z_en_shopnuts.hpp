#ifndef _Z_EN_SHOPNUTS_H_
#define _Z_EN_SHOPNUTS_H_

#include "global.hpp"

struct EnShopnuts;

typedef struct EnShopnuts {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x6FC];
} EnShopnuts; // size = 0x8A0

extern ActorInit En_Shopnuts_InitVars;

#endif
