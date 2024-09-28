#ifndef _Z_EN_PU_BOX_H_
#define _Z_EN_PU_BOX_H_

#include "global.hpp"

struct EnPubox;

typedef struct EnPubox {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x20];
} EnPubox; // size = 0x1C4

extern ActorInit En_Pu_box_InitVars;

#endif
