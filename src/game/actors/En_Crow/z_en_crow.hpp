#ifndef _Z_EN_CROW_H_
#define _Z_EN_CROW_H_

#include "global.hpp"

struct EnCrow;

typedef struct EnCrow {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x474];
} EnCrow; // size = 0x618

extern ActorInit En_Crow_InitVars;

#endif
