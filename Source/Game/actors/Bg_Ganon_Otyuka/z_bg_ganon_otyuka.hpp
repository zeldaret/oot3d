#ifndef _Z_BG_GANON_OTYUKA_H_
#define _Z_BG_GANON_OTYUKA_H_

#include "global.hpp"

struct BgGanonOtyuka;

typedef struct BgGanonOtyuka {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x54];
} BgGanonOtyuka; // size = 0x1F8

extern ActorInit Bg_Ganon_Otyuka_InitVars;

#endif
