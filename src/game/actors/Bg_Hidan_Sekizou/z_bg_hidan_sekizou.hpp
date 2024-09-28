#ifndef _Z_BG_HIDAN_SEKIZOU_H_
#define _Z_BG_HIDAN_SEKIZOU_H_

#include "global.hpp"

struct BgHidanSekizou;

typedef struct BgHidanSekizou {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x270];
} BgHidanSekizou; // size = 0x414

extern ActorInit Bg_Hidan_Sekizou_InitVars;

#endif
