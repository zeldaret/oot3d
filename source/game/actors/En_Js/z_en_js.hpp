#ifndef _Z_EN_JS_H_
#define _Z_EN_JS_H_

#include "global.hpp"

struct EnJs;

typedef struct EnJs {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x56C];
} EnJs; // size = 0x710

extern ActorInit En_Js_InitVars;

#endif
