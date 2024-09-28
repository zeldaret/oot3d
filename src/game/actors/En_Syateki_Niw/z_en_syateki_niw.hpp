#ifndef _Z_EN_SYATEKI_NIW_H_
#define _Z_EN_SYATEKI_NIW_H_

#include "global.hpp"

struct EnSyatekiNiw;

typedef struct EnSyatekiNiw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x65C];
} EnSyatekiNiw; // size = 0x800

extern ActorInit En_Syateki_Niw_InitVars;

#endif
