#ifndef _Z_EN_PO_SISTERS_H_
#define _Z_EN_PO_SISTERS_H_

#include "global.hpp"

struct EnPoSisters;

typedef struct EnPoSisters {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x954];
} EnPoSisters; // size = 0xAF8

extern ActorInit En_Po_Sisters_InitVars;

#endif
