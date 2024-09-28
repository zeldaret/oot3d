#ifndef _Z_ITEM_SHIELD_H_
#define _Z_ITEM_SHIELD_H_

#include "global.hpp"

struct ItemShield;

typedef struct ItemShield {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD0];
} ItemShield; // size = 0x274

extern ActorInit Item_Shield_InitVars;

#endif
