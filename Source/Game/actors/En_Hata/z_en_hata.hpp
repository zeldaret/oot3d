#ifndef _Z_EN_HATA_H_
#define _Z_EN_HATA_H_

#include "global.hpp"

struct EnHata;

typedef struct EnHata {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x178];
} EnHata; // size = 0x31C

extern ActorInit En_Hata_InitVars;

#endif
