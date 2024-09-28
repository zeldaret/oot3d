#ifndef _Z_BG_MENKURI_NISEKABE_H_
#define _Z_BG_MENKURI_NISEKABE_H_

#include "global.hpp"

struct BgMenkuriNisekabe;

typedef struct BgMenkuriNisekabe {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x4];
} BgMenkuriNisekabe; // size = 0x1A8

extern ActorInit Bg_Menkuri_Nisekabe_InitVars;

#endif
