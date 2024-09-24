#ifndef _Z_ITEM_ETCETERA_H_
#define _Z_ITEM_ETCETERA_H_

#include "global.hpp"

struct ItemEtcetera;

typedef struct ItemEtcetera {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x18];
} ItemEtcetera; // size = 0x1BC

extern ActorInit Item_Etcetera_InitVars;

#endif
