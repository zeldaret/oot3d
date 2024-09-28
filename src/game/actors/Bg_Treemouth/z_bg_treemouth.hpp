#ifndef _Z_BG_TREEMOUTH_H_
#define _Z_BG_TREEMOUTH_H_

#include "global.hpp"

struct BgTreemouth;

typedef void (*BgTreemouthActionFunc)(struct BgTreemouth*, PlayState*);

typedef struct BgTreemouth {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x01BC */ BgTreemouthActionFunc actionFunc;
    /* 0x01C0 */ f32 unk_1C0;
    /* 0x01C4 */ SkeletonAnimationModel* skelAnimModel;
    /* 0x01C8 */ char unk_1C8[0x4];
} BgTreemouth; // size = 0x1CC

extern ActorInit Bg_Treemouth_InitVars;

#endif
