#ifndef _Z_EN_TK_H_
#define _Z_EN_TK_H_

#include "global.hpp"

struct EnTk;

typedef struct EnTk {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x105C];
} EnTk; // size = 0x1200

extern ActorInit En_Tk_InitVars;

#endif
