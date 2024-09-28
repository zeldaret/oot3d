#ifndef _Z_BG_HIDAN_ROCK_H_
#define _Z_BG_HIDAN_ROCK_H_

#include "global.hpp"

struct BgHidanRock;

typedef struct BgHidanRock {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x94];
} BgHidanRock; // size = 0x238

extern ActorInit Bg_Hidan_Rock_InitVars;

#endif
