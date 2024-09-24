#ifndef _Z_EN_KZ_H_
#define _Z_EN_KZ_H_

#include "global.hpp"

struct EnKz;

typedef void (*EnKzActionFunc)(struct EnKz*, PlayState*);

typedef struct EnKz {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ SkelAnime skelAnime;
    /* 0x0228 */ char jointTable[0x548];
    /* 0x0770 */ char morphTable[0x548];
    /* 0x0CB8 */ EnKzActionFunc actionFunc;
    /* 0x0CBC */ ColliderCylinder collider;
    /* 0x0D14 */ s16 unk_D14; // struct?
    /* 0x0D16 */ char unk_D16[0x26];
    /* 0x0D3C */ u8 sfxPlayed;
    /* 0x0D3D */ u8 isTrading;
    /* 0x0D3E */ s16 waypoint;
    /* 0x0D40 */ s16 blinkTimer;
    /* 0x0D42 */ char unk_D42[0x2];
    /* 0x0D44 */ s16 eyeIdx;
    /* 0x0D46 */ s16 cutsceneCamera;
    /* 0x0D48 */ s16 gameplayCamera;
    /* 0x0D4A */ s16 unk_D4A[12];
    /* 0x0D62 */ s16 unk_D62[12];
    /* 0x0D7C */ SkeletonAnimationModel* skelAnimModel;
    /* 0x0D80 */ FaceAnimations faceAnims;
    /* 0x0F4C */ s8 unk_F4C;
} EnKz; // size = 0xF50

extern ActorInit En_Kz_InitVars;

#endif
