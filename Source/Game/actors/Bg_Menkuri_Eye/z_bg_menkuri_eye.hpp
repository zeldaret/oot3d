#ifndef _Z_BG_MENKURI_EYE_H_
#define _Z_BG_MENKURI_EYE_H_

#include "global.hpp"

struct BgMenkuriEye;

typedef struct BgMenkuriEye {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x78];
} BgMenkuriEye; // size = 0x21C

extern ActorInit Bg_Menkuri_Eye_InitVars;

#endif
