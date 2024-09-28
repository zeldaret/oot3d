#ifndef _Z_BG_HIDAN_SYOKU_H_
#define _Z_BG_HIDAN_SYOKU_H_

#include "global.hpp"

struct BgHidanSyoku;

typedef struct BgHidanSyoku {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgHidanSyoku; // size = 0x1C8

extern ActorInit Bg_Hidan_Syoku_InitVars;

#endif
