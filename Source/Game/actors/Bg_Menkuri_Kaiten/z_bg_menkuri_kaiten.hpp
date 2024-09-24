#ifndef _Z_BG_MENKURI_KAITEN_H_
#define _Z_BG_MENKURI_KAITEN_H_

#include "global.hpp"

struct BgMenkuriKaiten;

typedef struct BgMenkuriKaiten {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x1C];
} BgMenkuriKaiten; // size = 0x1C0

extern ActorInit Bg_Menkuri_Kaiten_InitVars;

#endif
