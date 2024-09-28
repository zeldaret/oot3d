#ifndef _Z_EN_NIW_H_
#define _Z_EN_NIW_H_

#include "global.hpp"

struct EnNiw;

typedef struct EnNiw {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x9F4];
} EnNiw; // size = 0xB98

extern ActorInit En_Niw_InitVars;

#endif
