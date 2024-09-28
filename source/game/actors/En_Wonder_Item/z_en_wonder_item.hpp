#ifndef _Z_EN_WONDER_ITEM_H_
#define _Z_EN_WONDER_ITEM_H_

#include "global.hpp"

struct EnWonderItem;

typedef struct EnWonderItem {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8C];
} EnWonderItem; // size = 0x230

extern ActorInit En_Wonder_Item_InitVars;

#endif
