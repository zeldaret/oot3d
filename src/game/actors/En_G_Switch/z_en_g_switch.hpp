#ifndef _Z_EN_G_SWITCH_H_
#define _Z_EN_G_SWITCH_H_

#include "global.hpp"

struct EnGSwitch;

typedef struct EnGSwitch {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8B8];
} EnGSwitch; // size = 0xA5C

extern ActorInit En_G_Switch_InitVars;

#endif
