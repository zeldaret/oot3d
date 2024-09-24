#ifndef _Z_BG_SPOT18_BASKET_H_
#define _Z_BG_SPOT18_BASKET_H_

#include "global.hpp"

struct BgSpot18Basket;

typedef struct BgSpot18Basket {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xF4];
} BgSpot18Basket; // size = 0x298

extern ActorInit Bg_Spot18_Basket_InitVars;

#endif
