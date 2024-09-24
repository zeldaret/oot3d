#ifndef _Z_BG_HIDAN_HAMSTEP_H_
#define _Z_BG_HIDAN_HAMSTEP_H_

#include "global.hpp"

struct BgHidanHamstep;

typedef struct BgHidanHamstep {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x104];
} BgHidanHamstep; // size = 0x2A8

extern ActorInit Bg_Hidan_Hamstep_InitVars;

#endif
