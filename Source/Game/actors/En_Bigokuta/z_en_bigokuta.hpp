#ifndef _Z_EN_BIGOKUTA_H_
#define _Z_EN_BIGOKUTA_H_

#include "global.hpp"

struct EnBigokuta;

typedef struct EnBigokuta {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9D0];
} EnBigokuta; // size = 0xB74

extern ActorInit En_Bigokuta_InitVars;

#endif
