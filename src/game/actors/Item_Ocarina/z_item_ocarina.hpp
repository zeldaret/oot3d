#ifndef _Z_ITEM_OCARINA_H_
#define _Z_ITEM_OCARINA_H_

#include "global.hpp"

struct ItemOcarina;

typedef struct ItemOcarina {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xC];
} ItemOcarina; // size = 0x1B0

extern ActorInit Item_Ocarina_InitVars;

#endif
