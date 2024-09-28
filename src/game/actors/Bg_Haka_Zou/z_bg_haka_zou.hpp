#ifndef _Z_BG_HAKA_ZOU_H_
#define _Z_BG_HAKA_ZOU_H_

#include "global.hpp"

struct BgHakaZou;

typedef struct BgHakaZou {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x7C];
} BgHakaZou; // size = 0x220

extern ActorInit Bg_Haka_Zou_InitVars;

#endif
