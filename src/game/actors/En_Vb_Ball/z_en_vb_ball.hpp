#ifndef _Z_EN_VB_BALL_H_
#define _Z_EN_VB_BALL_H_

#include "global.hpp"

struct EnVbBall;

typedef struct EnVbBall {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x84];
} EnVbBall; // size = 0x228

extern ActorInit En_Vb_Ball_InitVars;

#endif
