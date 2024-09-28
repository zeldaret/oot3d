#ifndef _Z_BG_HIDAN_RSEKIZOU_H_
#define _Z_BG_HIDAN_RSEKIZOU_H_

#include "global.hpp"

struct BgHidanRsekizou;

typedef struct BgHidanRsekizou {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x240];
} BgHidanRsekizou; // size = 0x3E4

extern ActorInit Bg_Hidan_Rsekizou_InitVars;

#endif
