#ifndef _Z_BG_BDAN_SWITCH_H_
#define _Z_BG_BDAN_SWITCH_H_

#include "global.hpp"

struct BgBdanSwitch;

typedef struct BgBdanSwitch {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xAC];
} BgBdanSwitch; // size = 0x250

extern ActorInit Bg_Bdan_Switch_InitVars;

#endif
