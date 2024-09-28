#ifndef _Z_EN_WF_H_
#define _Z_EN_WF_H_

#include "global.hpp"

struct EnWf;

typedef struct EnWf {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xD74];
} EnWf; // size = 0xF18

extern ActorInit En_Wf_InitVars;

#endif
