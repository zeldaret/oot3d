#ifndef _Z_EN_MD_H_
#define _Z_EN_MD_H_

#include "global.hpp"

struct EnMd;

typedef struct EnMd {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xA80];
} EnMd; // size = 0xC24

extern ActorInit En_Md_InitVars;

#endif
