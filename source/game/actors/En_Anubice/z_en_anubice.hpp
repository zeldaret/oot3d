#ifndef _Z_EN_ANUBICE_H_
#define _Z_EN_ANUBICE_H_

#include "global.hpp"

struct EnAnubice;

typedef struct EnAnubice {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x564];
} EnAnubice; // size = 0x708

extern ActorInit En_Anubice_InitVars;

#endif
