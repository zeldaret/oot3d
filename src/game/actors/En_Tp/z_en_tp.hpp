#ifndef _Z_EN_TP_H_
#define _Z_EN_TP_H_

#include "global.hpp"

struct EnTp;

typedef struct EnTp {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x430];
} EnTp; // size = 0x5D4

extern ActorInit En_Tp_InitVars;

#endif
