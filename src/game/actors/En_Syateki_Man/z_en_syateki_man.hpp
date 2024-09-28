#ifndef _Z_EN_SYATEKI_MAN_H_
#define _Z_EN_SYATEKI_MAN_H_

#include "global.hpp"

struct EnSyatekiMan;

typedef struct EnSyatekiMan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x3FC];
} EnSyatekiMan; // size = 0x5A0

extern ActorInit En_Syateki_Man_InitVars;

#endif
