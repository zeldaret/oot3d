#ifndef _Z_EN_DNS_H_
#define _Z_EN_DNS_H_

#include "global.hpp"

struct EnDns;

typedef struct EnDns {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x708];
} EnDns; // size = 0x8AC

extern ActorInit En_Dns_InitVars;

#endif
