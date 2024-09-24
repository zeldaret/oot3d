#ifndef _Z_EN_BUBBLE_H_
#define _Z_EN_BUBBLE_H_

#include "global.hpp"

struct EnBubble;

typedef struct EnBubble {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x13C];
} EnBubble; // size = 0x2E0

extern ActorInit En_Bubble_InitVars;

#endif
