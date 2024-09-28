#ifndef _Z_EN_SCENE_CHANGE_H_
#define _Z_EN_SCENE_CHANGE_H_

#include "global.hpp"

struct EnSceneChange;

typedef struct EnSceneChange {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x8];
} EnSceneChange; // size = 0x1AC

extern ActorInit En_Scene_Change_InitVars;

#endif
