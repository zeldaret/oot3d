#ifndef _Z_BG_HIDAN_KOWARERUKABE_H_
#define _Z_BG_HIDAN_KOWARERUKABE_H_

#include "global.hpp"

struct BgHidanKowarerukabe;

typedef struct BgHidanKowarerukabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x90];
} BgHidanKowarerukabe; // size = 0x234

extern ActorInit Bg_Hidan_Kowarerukabe_InitVars;

#endif
