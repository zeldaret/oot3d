#ifndef _Z_BG_PO_EVENT_H_
#define _Z_BG_PO_EVENT_H_

#include "global.hpp"

struct BgPoEvent;

typedef struct BgPoEvent {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x110];
} BgPoEvent; // size = 0x2B4

extern ActorInit Bg_Po_Event_InitVars;

#endif
