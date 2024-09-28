#ifndef _Z_EN_EX_ITEM_H_
#define _Z_EN_EX_ITEM_H_

#include "global.hpp"

struct EnExItem;

typedef struct EnExItem {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x30];
} EnExItem; // size = 0x1D4

extern ActorInit En_Ex_Item_InitVars;

#endif
