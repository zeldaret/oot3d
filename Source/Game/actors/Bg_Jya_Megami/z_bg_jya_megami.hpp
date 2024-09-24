#ifndef _Z_BG_JYA_MEGAMI_H_
#define _Z_BG_JYA_MEGAMI_H_

#include "global.hpp"

struct BgJyaMegami;

typedef struct BgJyaMegami {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x238];
} BgJyaMegami; // size = 0x3DC

extern ActorInit Bg_Jya_Megami_InitVars;

#endif
