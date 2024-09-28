#ifndef _Z_EN_PO_RELAY_H_
#define _Z_EN_PO_RELAY_H_

#include "global.hpp"

struct EnPoRelay;

typedef struct EnPoRelay {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xBCC];
} EnPoRelay; // size = 0xD70

extern ActorInit En_Po_Relay_InitVars;

#endif
