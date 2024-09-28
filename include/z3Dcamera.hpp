#ifndef _Z3DCAMERA_H_
#define _Z3DCAMERA_H_

#include "z3Dvec.hpp"

#define CAM_STAT_CUT        0
#define CAM_STAT_WAIT       1
#define CAM_STAT_UNK3       3
#define CAM_STAT_ACTIVE     7
#define CAM_STAT_UNK100     0x100

#define NUM_CAMS 4
#define MAIN_CAM 0
#define SUBCAM_FIRST 1
#define SUBCAM_FREE 0
#define SUBCAM_NONE -1
#define SUBCAM_ACTIVE -1

typedef struct Camera {
    /* 0x000 */ char unk_0[0x080];
    /* 0x080 */ Vec3f at;
    /* 0x08C */ Vec3f eye;
    /* 0x098 */ Vec3f up;
    /* 0x0A4 */ Vec3f eyeNext;
    /* 0x0B0 */ Vec3f skyboxOffset;
    /* 0x0BC */ char unk_BC[0x100];
} Camera; // size = 0x1BC

#endif
