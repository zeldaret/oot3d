#ifndef _Z_EN_TAKARA_MAN_H_
#define _Z_EN_TAKARA_MAN_H_

#include "global.hpp"

struct EnTakaraMan;

typedef struct EnTakaraMan {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x62C];
} EnTakaraMan; // size = 0x7D0

extern ActorInit En_Takara_Man_InitVars;

#endif
