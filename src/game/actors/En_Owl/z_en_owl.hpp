#ifndef _Z_EN_OWL_H_
#define _Z_EN_OWL_H_

#include "global.hpp"

struct EnOwl;

typedef struct EnOwl {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x11D8];
} EnOwl; // size = 0x137C

extern ActorInit En_Owl_InitVars;

#endif
