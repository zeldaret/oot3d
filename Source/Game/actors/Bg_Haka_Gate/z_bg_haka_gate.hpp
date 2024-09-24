#ifndef _Z_BG_HAKA_GATE_H_
#define _Z_BG_HAKA_GATE_H_

#include "global.hpp"

struct BgHakaGate;

typedef struct BgHakaGate {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4C];
} BgHakaGate; // size = 0x1F0

extern ActorInit Bg_Haka_Gate_InitVars;

#endif
