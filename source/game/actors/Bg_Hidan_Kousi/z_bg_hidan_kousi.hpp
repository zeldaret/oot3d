#ifndef _Z_BG_HIDAN_KOUSI_H_
#define _Z_BG_HIDAN_KOUSI_H_

#include "global.hpp"

struct BgHidanKousi;

typedef struct BgHidanKousi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x24];
} BgHidanKousi; // size = 0x1C8

extern ActorInit Bg_Hidan_Kousi_InitVars;

#endif
