#ifndef _Z_EN_HINTNUTS_H_
#define _Z_EN_HINTNUTS_H_

#include "global.hpp"

struct EnHintnuts;

typedef struct EnHintnuts {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x494];
} EnHintnuts; // size = 0x638

extern ActorInit En_Hintnuts_InitVars;

#endif
