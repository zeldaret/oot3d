#ifndef _Z_BG_SPOT01_IDOMIZU_H_
#define _Z_BG_SPOT01_IDOMIZU_H_

#include "global.hpp"

struct BgSpot01Idomizu;

typedef void (*BgSpot01IdomizuActionFunc)(struct BgSpot01Idomizu*, PlayState*);

typedef struct BgSpot01Idomizu {
    /* 0x000 */ Actor actor;
    /* 0x1A4 */ BgSpot01IdomizuActionFunc actionFunc;
    /* 0x1A8 */ f32 waterHeight;
    /* 0x1AC */ char unk_1AC[0x4];
    /* 0x1B0 */ SkeletonAnimationModel* skelAnimModel;
} BgSpot01Idomizu; // size = 0x1B4

extern ActorInit Bg_Spot01_Idomizu_InitVars;

#endif
