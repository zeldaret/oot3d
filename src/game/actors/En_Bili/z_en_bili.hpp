#ifndef _Z_EN_BILI_H_
#define _Z_EN_BILI_H_

#include "global.hpp"

struct EnBili;

typedef struct EnBili {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x524];
} EnBili; // size = 0x6C8

extern ActorInit En_Bili_InitVars;

#endif
