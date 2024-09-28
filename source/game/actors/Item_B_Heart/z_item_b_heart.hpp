#ifndef _Z_ITEM_B_HEART_H_
#define _Z_ITEM_B_HEART_H_

#include "global.hpp"

struct ItemBHeart;

typedef struct ItemBHeart {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ SkeletonAnimationModel* skelAnimModel;
    /* 0x01A8 */ char unk_1A8[0xC];
    /* 0x01B4 */ f32 unk_1B4;
    /* 0x01B8 */ char unk_1B8[0x8];
    /* 0x01C0 */ s16 unk_1C0;
    /* 0x01C2 */ char unk_1C2[0x6];
} ItemBHeart; // size = 0x1C8

extern ActorInit Item_B_Heart_InitVars;

#endif
