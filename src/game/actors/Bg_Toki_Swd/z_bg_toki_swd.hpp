#ifndef _Z_BG_TOKI_SWD_H_
#define _Z_BG_TOKI_SWD_H_

#include "global.hpp"

struct BgTokiSwd;

typedef struct BgTokiSwd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x60];
} BgTokiSwd; // size = 0x204

extern ActorInit Bg_Toki_Swd_InitVars;

#endif
