#ifndef _Z_BG_UMAJUMP_H_
#define _Z_BG_UMAJUMP_H_

#include "global.hpp"

struct BgUmajump;

typedef struct BgUmajump {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgUmajump; // size = 0x1C0

extern ActorInit Bg_Umajump_InitVars;

#endif
