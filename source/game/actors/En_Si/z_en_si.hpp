#ifndef _Z_EN_SI_H_
#define _Z_EN_SI_H_

#include "global.hpp"

struct EnSi;

typedef void (*EnSiActionFunc)(struct EnSi*, PlayState*);

typedef struct EnSi {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ EnSiActionFunc actionFunc;
    /* 0x01A8 */ ColliderCylinder collider;
    /* 0x0200 */ u8 unk_200;
    /* 0x0201 */ char unk_201[3];
    /* 0x0204 */ SkeletonAnimationModel* skelAnimModels[2];
    /* 0x020C */ SkeletonAnimationModel_unk_0C* unk_20C;
} EnSi; // size = 0x210

extern ActorInit En_Si_InitVars;

#endif
