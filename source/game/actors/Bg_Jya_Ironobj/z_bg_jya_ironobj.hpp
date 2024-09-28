#ifndef _Z_BG_JYA_IRONOBJ_H_
#define _Z_BG_JYA_IRONOBJ_H_

#include "global.hpp"

struct BgJyaIronobj;

typedef struct BgJyaIronobj {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x78];
} BgJyaIronobj; // size = 0x21C

extern ActorInit Bg_Jya_Ironobj_InitVars;

#endif
