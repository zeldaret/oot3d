#ifndef _Z_EN_HORSE_GAME_CHECK_H_
#define _Z_EN_HORSE_GAME_CHECK_H_

#include "global.hpp"

struct EnHorseGameCheck;

struct EnHorseGameCheckBase;

typedef s32 (*EnHorseGameCheckFunc)(struct EnHorseGameCheckBase* self, GameState* state);

typedef struct EnHorseGameCheckBase {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ s8 type;
    /* 0x01A8 */ s32 unk_1A8;
} EnHorseGameCheckBase; // size = 0x01AC

typedef struct EnHorseGameCheckIngoRace {
    /* 0x0000 */ EnHorseGameCheckBase base;
    /* 0x01AC */ s32 startFlags;
    /* 0x01B0 */ s32 playerCheck[3];
    /* 0x01BC */ s32 ingoCheck[3];
    /* 0x01C8 */ Actor* ingoHorse;
    /* 0x01CC */ s32 startTimer;
    /* 0x01D0 */ s8 result;
    /* 0x01D4 */ s32 finishTimer;
    /* 0x01D8 */ s32 playerFinish;
    /* 0x01DC */ s32 ingoFinish;
} EnHorseGameCheckIngoRace; // size = 0x1E0

typedef struct EnHorseGameCheckGerudoArchery {
    /* 0x0000 */ EnHorseGameCheckBase base;
    /* 0x01AC */ s32 unk_1AC;
    /* 0x01B0 */ u32 startTimer;
} EnHorseGameCheckGerudoArchery; // size = 0x1B4

typedef struct EnHorseGameCheck3 {
    /* 0x0000 */ EnHorseGameCheckBase base;
    /* 0x01AC */ s32 unk_1AC;
} EnHorseGameCheck3; // size = 0x1B0

typedef struct EnHorseGameCheckMalonRace {
    /* 0x0000 */ EnHorseGameCheckBase base;
    /* 0x01AC */ s32 startTimer;
    /* 0x01B0 */ s32 raceFlags;
    /* 0x01B4 */ s32 fenceCheck[16];
    /* 0x01F4 */ s32 finishTimer;
    /* 0x01F8 */ s32 result;
    /* 0x01FC */ s32 lapCount;
} EnHorseGameCheckMalonRace; // size = 0x200

typedef struct EnHorseGameCheck {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x5C];
} EnHorseGameCheck; // size = 0x200

typedef enum {
    /* 0 */ HORSEGAME_NONE,
    /* 1 */ HORSEGAME_INGO_RACE,
    /* 2 */ HORSEGAME_GERUDO_ARCHERY,
    /* 3 */ HORSEGAME_TYPE3,
    /* 4 */ HORSEGAME_MALON_RACE
} EnHorseGameCheckType;

#define ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, flag) (((EnHorseGameCheckMalonRace*)base)->raceFlags & flag)
#define ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, flag) (((EnHorseGameCheckMalonRace*)base)->raceFlags |= flag)

extern ActorInit En_Horse_Game_Check_InitVars;

#endif
