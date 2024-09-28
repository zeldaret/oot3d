#ifndef _Z_EN_DIVING_GAME_H_
#define _Z_EN_DIVING_GAME_H_

#include "global.hpp"

struct EnDivingGame;

typedef struct EnDivingGame {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0xBFC];
} EnDivingGame; // size = 0xDA0

extern ActorInit En_Diving_Game_InitVars;

#endif
