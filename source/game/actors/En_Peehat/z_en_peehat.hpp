#ifndef _Z_EN_PEEHAT_H_
#define _Z_EN_PEEHAT_H_

#include "global.hpp"

struct EnPeehat;

typedef struct EnPeehat {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x630];
} EnPeehat; // size = 0x7D4

extern ActorInit En_Peehat_InitVars;

#endif
