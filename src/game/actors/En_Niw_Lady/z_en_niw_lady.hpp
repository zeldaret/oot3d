#ifndef _Z_EN_NIW_LADY_H_
#define _Z_EN_NIW_LADY_H_

#include "global.hpp"

struct EnNiwLady;

typedef struct EnNiwLady {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x924];
} EnNiwLady; // size = 0xAC8

extern ActorInit En_Niw_Lady_InitVars;

#endif
