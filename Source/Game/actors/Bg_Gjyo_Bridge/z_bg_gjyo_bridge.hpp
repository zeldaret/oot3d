#ifndef _Z_BG_GJYO_BRIDGE_H_
#define _Z_BG_GJYO_BRIDGE_H_

#include "global.hpp"

struct BgGjyoBridge;

typedef struct BgGjyoBridge {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} BgGjyoBridge; // size = 0x1C4

extern ActorInit Bg_Gjyo_Bridge_InitVars;

#endif
