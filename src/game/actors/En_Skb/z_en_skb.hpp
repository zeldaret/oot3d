#ifndef _Z_EN_SKB_H_
#define _Z_EN_SKB_H_

#include "global.hpp"

struct EnSkb;

typedef struct EnSkb {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD30];
} EnSkb; // size = 0xED4

extern ActorInit En_Skb_InitVars;

#endif
