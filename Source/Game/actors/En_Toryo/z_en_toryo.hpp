#ifndef _Z_EN_TORYO_H_
#define _Z_EN_TORYO_H_

#include "global.hpp"

struct EnToryo;

typedef struct EnToryo {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA4C];
} EnToryo; // size = 0xBF0

extern ActorInit En_Toryo_InitVars;

#endif
