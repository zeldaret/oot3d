#ifndef _SKELETON_ANIMATION_MODEL_H_
#define _SKELETON_ANIMATION_MODEL_H_

#include "z3Dvec.hpp"

class SkeletonAnimationModel_unk_04 {
    char unk_00[0x34];
}; // size = 0x34

class SkeletonAnimationModel_unk_08 {
    void* unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
    s8 unk_10;
    s8 unk_11;
    char unk_12[0x2];
}; // size = 0x14

class AnimatedMaterial {
    void* unk_00;
    void* unk_04;
    char unk_08[0xC];
}; // size = 0x14

class SkeletonAnimationModel_unk_0C {
public:
    void FUN_00372d94(void* arg1);

    void SetAnimType(s8 type) {
        animType = type;
    }

    void SetAnimSpeed(f32 speed) {
        animSpeed = speed;
    }

    AnimatedMaterial* unk_00;
    void* unk_04;
    s32 curFrame;
    f32 animSpeed;
    s8 animType;
    char unk_11[0x87];
}; // size = 0x98

class SkeletonAnimationModel_unk_14 {
    void* vTable;
    void* unk_04;
    SkeletonAnimationModel_unk_04* unk_08;
    AnimatedMaterial* unk_0C;
    char unk_10[0x47C];
}; // size = 0x48C

class SkeletonAnimationModel {
public:
    void SetUnkAC(u8 arg1) {
        unk_AC = arg1;
    }

    void FUN_003721e0(MTX34* modelMtx);
    void FUN_00372170(s32 arg1);

    void* vTable;
    SkeletonAnimationModel_unk_04* unk_04;
    SkeletonAnimationModel_unk_08* unk_08;
    SkeletonAnimationModel_unk_0C* unk_0C;
    AnimatedMaterial* unk_10;
    SkeletonAnimationModel_unk_14* unk_14;
    char unk_18[0xC];
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    MTX34 unk_4C;
    MTX34 unk_7C;
    u8 unk_AC;
    char unk_AD[0x3];
}; // size = 0xB0

#endif
