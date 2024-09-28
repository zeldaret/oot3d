#ifndef _Z_BG_JYA_AMISHUTTER_H_
#define _Z_BG_JYA_AMISHUTTER_H_

#include "global.hpp"

struct BgJyaAmishutter;

typedef struct BgJyaAmishutter {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgJyaAmishutter; // size = 0x1C4

extern ActorInit Bg_Jya_Amishutter_InitVars;

#endif
