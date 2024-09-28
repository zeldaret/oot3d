#ifndef _Z_BG_HAKA_TRAP_H_
#define _Z_BG_HAKA_TRAP_H_

#include "global.hpp"

struct BgHakaTrap;

typedef struct BgHakaTrap {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x178];
} BgHakaTrap; // size = 0x31C

extern ActorInit Bg_Haka_Trap_InitVars;

#endif
