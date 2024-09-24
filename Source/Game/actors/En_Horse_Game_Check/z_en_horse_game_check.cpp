extern "C" {
#include "z_en_horse_game_check.hpp"
#include "actors/En_Horse/z_en_horse.hpp"

#define FLAGS 0x00000010

#define AT_FINISH_LINE(actor)                                                                                     \
    (Math3D_PointInSquare2D(sFinishLine[0], sFinishLine[1], sFinishLine[2], sFinishLine[3], (actor)->world.pos.x, \
                            (actor)->world.pos.z))
#define AT_UNK_CONDITION(horse)                                                                                  \
    (Math3D_PointInSquare2D(sFinishLine[0], sFinishLine[1], sFinishLine[2], sFinishLine[3], (horse)->unk_1088.x, \
                            (horse)->unk_1088.z))
#define AT_RANCH_EXIT(actor)                                                                                  \
    (Math3D_PointInSquare2D(sRanchExit[0], sRanchExit[1], sRanchExit[2], sRanchExit[3], (actor)->world.pos.x, \
                            (actor)->world.pos.z))

#define INGORACE_PLAYER_MOVE (1 << 0)
#define INGORACE_SET_TIMER (1 << 1)
#define INGORACE_INGO_MOVE (1 << 2)

typedef enum {
    /* 0 */ INGORACE_NO_RESULT,
    /* 1 */ INGORACE_PLAYER_WIN,
    /* 2 */ INGORACE_INGO_WIN,
    /* 3 */ INGORACE_TIME_UP
} HorseGameIngoRaceResult;

#define MALONRACE_PLAYER_MOVE (1 << 0)
#define MALONRACE_SET_TIMER (1 << 1)
#define MALONRACE_SECOND_LAP (1 << 2)
#define MALONRACE_BROKE_RULE (1 << 3)
#define MALONRACE_START_SFX (1 << 4)
#define MALONRACE_PLAYER_START (1 << 5)
#define MALONRACE_PLAYER_ON_MARK (1 << 6)

typedef enum {
    /* 0 */ MALONRACE_NO_RESULT,
    /* 1 */ MALONRACE_SUCCESS,
    /* 2 */ MALONRACE_TIME_UP,
    /* 3 */ MALONRACE_UNUSED,
    /* 4 */ MALONRACE_FAILURE
} HorseGameMalonRaceResult;

void EnHorseGameCheck_Init(Actor* actor, GameState* state);
void EnHorseGameCheck_Destroy(Actor* actor, GameState* state);
void EnHorseGameCheck_Update(Actor* actor, GameState* state);
void EnHorseGameCheck_Draw(Actor* actor, GameState* state);

s32 EnHorseGameCheck_InitIngoRace(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_InitGerudoArchery(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_InitType3(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_InitMalonRace(EnHorseGameCheckBase* base, GameState* state);

s32 EnHorseGameCheck_DestroyIngoRace(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_DestroyGerudoArchery(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_DestroyType3(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_DestroyMalonRace(EnHorseGameCheckBase* base, GameState* state);

s32 EnHorseGameCheck_UpdateIngoRace(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_UpdateGerudoArchery(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_UpdateType3(EnHorseGameCheckBase* base, GameState* state);
s32 EnHorseGameCheck_UpdateMalonRace(EnHorseGameCheckBase* base, GameState* state);

#ifdef NON_MATCHING
ActorInit En_Horse_Game_Check_InitVars = {
    ACTOR_EN_HORSE_GAME_CHECK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnHorseGameCheck),
    (ActorFunc)EnHorseGameCheck_Init,
    (ActorFunc)EnHorseGameCheck_Destroy,
    (ActorFunc)EnHorseGameCheck_Update,
    (ActorFunc)EnHorseGameCheck_Draw,
};

Vec3f sIngoRaceCheckpoints[] = {
    { 1700.0f, 1.0f, -540.0f },
    { 117.0f, 1.0f, 488.0f },
    { -1700.0f, 1.0f, -540.0f },
};

f32 sFinishLine[4] = { -230.0f, 80.0f, -2300.0f, -1470.0f };

f32 sRanchExit[4] = { 800.0f, 1000.0f, -2900.0f, -2700.0f };

Vec3f sFencePos[] = {
    { 820.0f, -44.0f, -1655.0f }, { 1497.0f, -21.0f, -1198.0f },  { 1655.0f, -44.0f, -396.0f },
    { 1291.0f, -44.0f, 205.0f },  { 379.0f, -21.0f, 455.0f },     { -95.0f, -21.0f, 455.0f },
    { -939.0f, 1.0f, 455.0f },    { -1644.0f, -21.0f, -1035.0f },
};

EnHorseGameCheckFunc sInitFuncs[] = {
    NULL,
    EnHorseGameCheck_InitIngoRace,
    EnHorseGameCheck_InitGerudoArchery,
    EnHorseGameCheck_InitType3,
    EnHorseGameCheck_InitMalonRace,
};

EnHorseGameCheckFunc sDestroyFuncs[] = {
    NULL,
    EnHorseGameCheck_DestroyIngoRace,
    EnHorseGameCheck_DestroyGerudoArchery,
    EnHorseGameCheck_DestroyType3,
    EnHorseGameCheck_DestroyMalonRace,
};

EnHorseGameCheckFunc sUpdateFuncs[] = {
    NULL,
    EnHorseGameCheck_UpdateIngoRace,
    EnHorseGameCheck_UpdateGerudoArchery,
    EnHorseGameCheck_UpdateType3,
    EnHorseGameCheck_UpdateMalonRace,
};
#else
__attribute__((section("EnHorseGameCheckData_526FC0"))) ActorInit En_Horse_Game_Check_InitVars = {
    ACTOR_EN_HORSE_GAME_CHECK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnHorseGameCheck),
    (ActorFunc)EnHorseGameCheck_Init,
    (ActorFunc)EnHorseGameCheck_Destroy,
    (ActorFunc)EnHorseGameCheck_Update,
    (ActorFunc)EnHorseGameCheck_Draw,
};

__attribute__((section("EnHorseGameCheckData_526FC0"))) s32 sIngoRaceStaticInitializerGuard = 0;

__attribute__((section("EnHorseGameCheckData_526FC0"))) Vec3f sIngoRaceCheckpoints[] = {
    { 1700.0f, 1.0f, -540.0f },
    { 117.0f, 1.0f, 488.0f },
    { -1700.0f, 1.0f, -540.0f },
};

__attribute__((section("EnHorseGameCheckData_526FC0"))) f32 sFinishLine[4] = { -230.0f, 80.0f, -2300.0f, -1470.0f };

__attribute__((section("EnHorseGameCheckData_527018"))) f32 sRanchExit[4] = { 800.0f, 1000.0f, -2900.0f, -2700.0f };

__attribute__((section("EnHorseGameCheckData_527018"))) Vec3f sFencePos[8] = {
    { 820.0f, -44.0f, -1655.0f }, { 1497.0f, -21.0f, -1198.0f },  { 1655.0f, -44.0f, -396.0f },
    { 1291.0f, -44.0f, 205.0f },  { 379.0f, -21.0f, 455.0f },     { -95.0f, -21.0f, 455.0f },
    { -939.0f, 1.0f, 455.0f },    { -1644.0f, -21.0f, -1035.0f },
};

__attribute__((section("EnHorseGameCheckData_527018"))) EnHorseGameCheckFunc sInitFuncs[] = {
    NULL,
    EnHorseGameCheck_InitIngoRace,
    EnHorseGameCheck_InitGerudoArchery,
    EnHorseGameCheck_InitType3,
    EnHorseGameCheck_InitMalonRace,
};

__attribute__((section("EnHorseGameCheckData_527018"))) EnHorseGameCheckFunc sDestroyFuncs[] = {
    NULL,
    EnHorseGameCheck_DestroyIngoRace,
    EnHorseGameCheck_DestroyGerudoArchery,
    EnHorseGameCheck_DestroyType3,
    EnHorseGameCheck_DestroyMalonRace,
};

__attribute__((section("EnHorseGameCheckData_527018"))) EnHorseGameCheckFunc sUpdateFuncs[] = {
    NULL,
    EnHorseGameCheck_UpdateIngoRace,
    EnHorseGameCheck_UpdateGerudoArchery,
    EnHorseGameCheck_UpdateType3,
    EnHorseGameCheck_UpdateMalonRace,
};
#endif

s32 EnHorseGameCheck_InitIngoRace(EnHorseGameCheckBase* base, GameState* state) {
    EnHorseGameCheckIngoRace* self = (EnHorseGameCheckIngoRace*)base;
    PlayState* play = (PlayState*)state;
    s32 ret = true;
    s32 i;

    self->base.type = HORSEGAME_INGO_RACE;
    self->startFlags = 0;
    for (i = 0; i < 3; i++) {
        self->playerCheck[i] = 0;
    }
    self->ingoHorse =
        Actor_Spawn(&play->actorCtx, play, ACTOR_EN_HORSE, -250.0f, 1.0f, -1650.0f, 0, 0x4000, 0, 0x8003, 1);

    self->startTimer = 0;
    self->finishTimer = 0;
    self->result = INGORACE_NO_RESULT;
    self->playerFinish = 0;
    self->ingoFinish = 0;

    return ret;
}

s32 EnHorseGameCheck_DestroyIngoRace(EnHorseGameCheckBase* base, GameState* state) {
    return true;
}

#ifdef NON_MATCHING
/*
static void EnHorseGameCheck_FinishIngoRace(EnHorseGameCheckBase* base, GameState* state) {
    PlayState* play = (PlayState*)state;
    EnHorseGameCheckIngoRace* self = (EnHorseGameCheckIngoRace*)base;

    gSaveContext.cutsceneIndex = 0;
    if (self->result == INGORACE_PLAYER_WIN) {
        if (gSaveContext.eventInf[0] & 0x40) {
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0xF) | 6;
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0x8000) | 0x8000;
            if (self->base.unk_1A8 == 0) {
                FUN_003716f0(play, 0x4CE, 0x14, 0x2E);
                self->base.unk_1A8 = 1;
            }
            FUN_00354358(0x10005AF);
        } else {
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0xF) | 4;
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0x8000) | 0x8000;
            FUN_00354358(0x10005AF);
            if (self->base.unk_1A8 == 0) {
                FUN_003716f0(play, 0x4CE, 0x14, 0x2E);
                self->base.unk_1A8 = 1;
            }
        }
    } else {
        if (self->base.unk_1A8 == 0) {
            FUN_003716f0(play, 0x558, 0x14, 0x20);
            self->base.unk_1A8 = 1;
        }
        gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0xF) | 3;
        gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & ~0x8000) | 0x8000;
    }
    DREG(25) = 0;
    gSaveContext.timer1State = 0;
}

s32 EnHorseGameCheck_UpdateIngoRace(EnHorseGameCheckBase* base, GameState* state) {
    PlayState* play = (PlayState*)state;
    EnHorseGameCheckIngoRace* self = (EnHorseGameCheckIngoRace*)base;
    s32 ret = true;
    s32 i;

    static const Vector3f unused(0, 0, 0);

    Player* player1 = GET_PLAYER(play);
    Player* player = player1;

    if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(50)) &&
        !(((EnHorseGameCheckIngoRace*)base)->startFlags & INGORACE_SET_TIMER)) {
        ((EnHorseGameCheckIngoRace*)base)->startFlags |= INGORACE_SET_TIMER;
        FUN_0035239c(0);
    } else if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(80)) && (((Player*)player)->rideActor != NULL) &&
               !(((EnHorseGameCheckIngoRace*)base)->startFlags & INGORACE_PLAYER_MOVE)) {
        ((EnHorseGameCheckIngoRace*)base)->startFlags |= INGORACE_PLAYER_MOVE;
        ((EnHorse*)((Player*)player)->rideActor)->inRace = 1;
    } else if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(81)) &&
               !(((EnHorseGameCheckIngoRace*)base)->startFlags & INGORACE_INGO_MOVE)) {
        ((EnHorse*)self->ingoHorse)->inRace = 1;
        ((EnHorseGameCheckIngoRace*)base)->startFlags |= INGORACE_INGO_MOVE;
        Audio_PlaySoundGeneral(0x10004BA, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
    }

    self->startTimer++;

    for (i = 0; i < 3; i++) {
        EnHorse* horse = (EnHorse*)player->rideActor;

        if ((horse != NULL) &&
            (Math3D_Vec3f_DistXYZ(&sIngoRaceCheckpoints[i], &player->rideActor->world.pos) < 400.0f)) {
            if ((i >= 1) && (self->playerCheck[i - 1] == 1)) {
                self->playerCheck[i] = 1;
            } else if (i == 0) {
                self->playerCheck[i] = 1;
            }
        }

        Actor* ingoHorse = self->ingoHorse;

        if (Math3D_Vec3f_DistXYZ(&sIngoRaceCheckpoints[i], &ingoHorse->world.pos) < 400.0f) {
            if ((i >= 1) && (self->ingoCheck[i - 1] == 1)) {
                self->ingoCheck[i] = 1;
            } else if (i == 0) {
                self->ingoCheck[i] = 1;
            }
        }
    }

    if (self->result == INGORACE_NO_RESULT) {
        if ((((EnHorse*)player->rideActor) != NULL) && (self->playerCheck[2] == 1) &&
            AT_UNK_CONDITION((EnHorse*)player->rideActor)) {
            ((EnHorseGameCheckIngoRace*)base)->playerFinish++;
            if (((EnHorseGameCheckIngoRace*)base)->playerFinish >= 1) {
                ((EnHorseGameCheckIngoRace*)base)->result = INGORACE_PLAYER_WIN;
                ((EnHorseGameCheckIngoRace*)base)->finishTimer = ADJUST_FRAMECOUNT(55);
                Audio_QueueSeqCmd(0, 0x10005AE, 0);
                Audio_PlaySoundGeneral(0x10004BA, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
            }
            for (i = 0; i < 3; i++) {
                self->playerCheck[i] = 0;
            }
        }
        if ((((EnHorseGameCheckIngoRace*)base)->ingoHorse != NULL) &&
            (((EnHorseGameCheckIngoRace*)base)->ingoCheck[2] == 1) &&
            AT_UNK_CONDITION((EnHorse*)((EnHorseGameCheckIngoRace*)base)->ingoHorse) &&
            (((EnHorseGameCheckIngoRace*)base)->playerFinish == 0)) {
            ((EnHorseGameCheckIngoRace*)base)->ingoFinish++;
            if (((EnHorseGameCheckIngoRace*)base)->ingoFinish >= 1) {
                ((EnHorseGameCheckIngoRace*)base)->result = INGORACE_INGO_WIN;
                ((EnHorseGameCheckIngoRace*)base)->finishTimer = ADJUST_FRAMECOUNT(70);
                ((EnHorse*)((EnHorseGameCheckIngoRace*)base)->ingoHorse)->stateFlags |= ENHORSE_INGO_WON;
                Audio_QueueSeqCmd(0, 0x10005AE, 0);
                Audio_PlaySoundGeneral(0x10004BA, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
            }
            for (i = 0; i < 3; i++) {
                self->ingoCheck[i] = 0;
            }
        }
        if ((((EnHorse*)player->rideActor != NULL) && AT_RANCH_EXIT(&((EnHorse*)player->rideActor)->actor)) ||
            AT_RANCH_EXIT(&player->actor)) {
            Audio_QueueSeqCmd(0, 0x10005AE, 0);
            ((EnHorseGameCheckIngoRace*)base)->result = INGORACE_INGO_WIN;
            ((EnHorseGameCheckIngoRace*)base)->finishTimer = ADJUST_FRAMECOUNT(20);
        }
        if ((gSaveContext.timer1Value >= 180) && (((EnHorseGameCheckIngoRace*)base)->startFlags & 2)) {
            Audio_QueueSeqCmd(0, 0x10005AE, 0);
            ((EnHorseGameCheckIngoRace*)base)->result = INGORACE_TIME_UP;
            ((EnHorseGameCheckIngoRace*)base)->finishTimer = ADJUST_FRAMECOUNT(20);
        }
    } else {
        if (((EnHorseGameCheckIngoRace*)base)->finishTimer > 0) {
            ((EnHorseGameCheckIngoRace*)base)->finishTimer--;
        } else {
            EnHorseGameCheck_FinishIngoRace(base, &play->state);
        }
    }
    return ret;
}
*/
#else
s32 EnHorseGameCheck_UpdateIngoRace(EnHorseGameCheckBase* base, GameState* state);
GLOBAL_ASM("asm/EnHorseGameCheck_UpdateIngoRace.s")
#endif

// GLOBAL_ASM("asm/EnHorseGameCheck_InitGerudoArchery.s")
s32 EnHorseGameCheck_InitGerudoArchery(EnHorseGameCheckBase* base, GameState* state) {
    EnHorseGameCheckGerudoArchery* self = (EnHorseGameCheckGerudoArchery*)base;
    s32 ret = true;

    self->base.type = HORSEGAME_GERUDO_ARCHERY;
    self->unk_1AC = 0;
    self->startTimer = 0;
    return ret;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_DestroyGerudoArchery.s")
s32 EnHorseGameCheck_DestroyGerudoArchery(EnHorseGameCheckBase* base, GameState* state) {
    return true;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_UpdateGerudoArchery.s")
s32 EnHorseGameCheck_UpdateGerudoArchery(EnHorseGameCheckBase* base, GameState* state) {
    EnHorseGameCheckGerudoArchery* self = (EnHorseGameCheckGerudoArchery*)base;
    Player* player = GET_PLAYER((PlayState*)state);
    EnHorse* horse = (EnHorse*)player->rideActor;
    s32 ret = true;

    if (horse == NULL) {
        return ret;
    }

    if ((self->startTimer > ADJUST_FRAMECOUNT(90)) || (ADJUST_FRAMECOUNT(90) == 0)) {
        horse->hbaStarted = 1;
    }
    self->startTimer++;
    return ret;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_InitType3.s")
s32 EnHorseGameCheck_InitType3(EnHorseGameCheckBase* base, GameState* state) {
    EnHorseGameCheck3* self = (EnHorseGameCheck3*)base;
    s32 ret = true;

    self->base.type = HORSEGAME_TYPE3;
    self->unk_1AC = 0;
    return ret;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_DestroyType3.s")
s32 EnHorseGameCheck_DestroyType3(EnHorseGameCheckBase* base, GameState* state) {
    return true;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_UpdateType3.s")
s32 EnHorseGameCheck_UpdateType3(EnHorseGameCheckBase* base, GameState* state) {
    return true;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_InitMalonRace.s")
s32 EnHorseGameCheck_InitMalonRace(EnHorseGameCheckBase* base, GameState* state) {
    s32 ret = true;
    EnHorseGameCheckMalonRace* self = (EnHorseGameCheckMalonRace*)base;
    s32 i;

    self->base.type = HORSEGAME_MALON_RACE;
    self->raceFlags = 0;
    self->finishTimer = 0;
    self->result = MALONRACE_NO_RESULT;
    for (i = 0; i < 16; i++) {
        self->fenceCheck[i] = 0;
    }
    self->lapCount = 0;
    return ret;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_DestroyMalonRace.s")
s32 EnHorseGameCheck_DestroyMalonRace(EnHorseGameCheckBase* base, GameState* state) {
    return true;
}

static void EnHorseGameCheck_FinishMalonRace(EnHorseGameCheckMalonRace* self, GameState* state) {
    PlayState* play = (PlayState*)state;
    if ((self->result == MALONRACE_SUCCESS) || (self->result == MALONRACE_TIME_UP)) {
        gSaveContext.cutsceneIndex = 0;
        if (self->base.unk_1A8 == 0) {
            FUN_003716f0(play, 0x4CE, 0x14, 0x2E);
            self->base.unk_1A8 = 1;
        }
    } else if (self->result == MALONRACE_FAILURE) {
        gSaveContext.timer1Value = 240;
        gSaveContext.timer1State = 0xF;
        gSaveContext.cutsceneIndex = 0;
        if (self->base.unk_1A8 == 0) {
            FUN_003716f0(play, 0x4CE, 0x14, 0x2E);
            self->base.unk_1A8 = 1;
        }
    } else {
        gSaveContext.cutsceneIndex = 0;
        if (self->base.unk_1A8 == 0) {
            FUN_003716f0(play, 0x157, 0x14, 0x2E);
            self->base.unk_1A8 = 1;
        }
    }
}

// GLOBAL_ASM("asm/EnHorseGameCheck_UpdateMalonRace.s")
s32 EnHorseGameCheck_UpdateMalonRace(EnHorseGameCheckBase* base, GameState* state) {
    EnHorseGameCheckMalonRace* self = (EnHorseGameCheckMalonRace*)base;
    s32 ret = true;
    PlayState* play = (PlayState*)state;
    s32 i;
    Player* player = GET_PLAYER(play);
    EnHorse* horse;

    if (!ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_PLAYER_ON_MARK) && AT_FINISH_LINE(player->rideActor)) {
        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_PLAYER_ON_MARK);
    } else if (ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_PLAYER_ON_MARK) &&
               !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_PLAYER_START) &&
               !AT_FINISH_LINE(player->rideActor)) {
        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_PLAYER_START);
    }
    if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(50)) &&
        !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_SET_TIMER)) {
        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_SET_TIMER);
        FUN_0035239c(0);
    } else if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(80)) && (player->rideActor != NULL) &&
               !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_PLAYER_MOVE)) {
        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_PLAYER_MOVE);
        horse = (EnHorse*)player->rideActor;

        horse->inRace = 1;
    } else if ((self->startTimer > ADJUST_S32_FOR_FRAMERATE(81)) &&
               !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_START_SFX)) {
        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_START_SFX);
        Audio_PlaySoundGeneral(0x10004BA, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
    }

    self->startTimer++;
    if (((EnHorseGameCheckMalonRace*)base)->result == MALONRACE_NO_RESULT) {
        f32 dist;

        for (i = 0; i < 16; i++) {
            if ((((EnHorseGameCheckMalonRace*)base)->lapCount == 0) && (i >= 8)) {
                break;
            }
            Vec3f* pos = &sFencePos[i % 8];
            horse = (EnHorse*)player->rideActor;

            dist = Math_Vec3f_DistXZ(pos, &horse->actor.world.pos);
            if ((player->rideActor != NULL) && (dist < 250.0f)) {

                if (horse->stateFlags & ENHORSE_JUMPING) {
                    if ((i >= 1) && (((EnHorseGameCheckMalonRace*)base)->fenceCheck[i - 1] == 1)) {
                        ((EnHorseGameCheckMalonRace*)base)->fenceCheck[i] = 1;
                    } else if (i == 0) {
                        ((EnHorseGameCheckMalonRace*)base)->fenceCheck[i] = 1;
                    }

                    if ((((EnHorseGameCheckMalonRace*)base)->fenceCheck[i - 1] == 0) &&
                        !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_BROKE_RULE)) {
                        ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_BROKE_RULE);
                        FUN_00367c7c(play, 0x208C, NULL);
                        ((EnHorseGameCheckMalonRace*)base)->result = 4;
                        ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(30);
                    }
                }
            }
        }
        if ((player->rideActor != NULL) && ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_PLAYER_START) &&
            AT_FINISH_LINE(player->rideActor)) {
            if ((((EnHorseGameCheckMalonRace*)base)->lapCount == 1) &&
                (((EnHorseGameCheckMalonRace*)base)->fenceCheck[15] == 0) && (player->rideActor->prevPos.x < -230.0f)) {
                ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_BROKE_RULE);
                FUN_00367c7c(play, 0x208C, NULL);
                ((EnHorseGameCheckMalonRace*)base)->result = MALONRACE_FAILURE;
                ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(30);
            } else if (((EnHorseGameCheckMalonRace*)base)->fenceCheck[15] == 1) {
                ((EnHorseGameCheckMalonRace*)base)->lapCount = 2;
                Audio_QueueSeqCmd(0, 0x10005AE, 0);
                Audio_PlaySoundGeneral(0x10004BA, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
                ((EnHorseGameCheckMalonRace*)base)->result = MALONRACE_SUCCESS;
                ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(70);
                gSaveContext.timer1State = 0xF;
            } else if ((((EnHorseGameCheckMalonRace*)base)->fenceCheck[7] == 1) &&
                       !ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_SECOND_LAP)) {
                ((EnHorseGameCheckMalonRace*)base)->lapCount = 1;
                ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_SECOND_LAP);
                FUN_00367c7c(play, 0x208D, NULL);
            } else if (((EnHorseGameCheckMalonRace*)base)->fenceCheck[7] == 0) {
                ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_BROKE_RULE);
                FUN_00367c7c(play, 0x208C, NULL);
                ((EnHorseGameCheckMalonRace*)base)->result = MALONRACE_FAILURE;
                ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(30);
            } else if (player->rideActor->prevPos.x > 80.0f) {
                ENHORSEGAMECHECK_MALONRACE_SET_FLAG(base, MALONRACE_BROKE_RULE);
                FUN_00367c7c(play, 0x208C, NULL);
                ((EnHorseGameCheckMalonRace*)base)->result = MALONRACE_FAILURE;
                ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(30);
            }
        }
        if ((gSaveContext.timer1Value >= 180) && ENHORSEGAMECHECK_MALONRACE_GET_FLAG(base, MALONRACE_SET_TIMER)) {
            gSaveContext.timer1Value = 240;
            ((EnHorseGameCheckMalonRace*)base)->result = MALONRACE_TIME_UP;
            ((EnHorseGameCheckMalonRace*)base)->finishTimer = ADJUST_FRAMECOUNT(30);
            gSaveContext.timer1State = 0;
        }
    } else {
        if (((EnHorseGameCheckMalonRace*)base)->finishTimer > 0) {
            ((EnHorseGameCheckMalonRace*)base)->finishTimer--;
        } else {
            EnHorseGameCheck_FinishMalonRace(((EnHorseGameCheckMalonRace*)base), state);
        }
    }
    return ret;
}

// GLOBAL_ASM("asm/EnHorseGameCheck_Init.s")
void EnHorseGameCheck_Init(Actor* actor, GameState* state) {
    PlayState* play = (PlayState*)state;
    EnHorseGameCheckBase* self = (EnHorseGameCheckBase*)actor;

    if ((play->sceneNum == SCENE_SPOT20) && (Flags_GetEventChkInf(0x18) || DREG(1))) {
        self->actor.params = HORSEGAME_MALON_RACE;
    }
    if (sInitFuncs[self->actor.params] != NULL) {
        sInitFuncs[self->actor.params](self, state);
    }
}

// GLOBAL_ASM("asm/EnHorseGameCheck_Destroy.s")
void EnHorseGameCheck_Destroy(Actor* actor, GameState* state) {
    EnHorseGameCheckBase* self = (EnHorseGameCheckBase*)actor;

    if (sDestroyFuncs[self->actor.params] != NULL) {
        sDestroyFuncs[self->actor.params](self, state);
    }
}

#ifdef NON_MATCHING
/*
void EnHorseGameCheck_Update(Actor* actor, GameState* state) {
    EnHorseGameCheckBase* self = (EnHorseGameCheckBase*)actor;

    if (sUpdateFuncs[self->type] != NULL) {
        sUpdateFuncs[self->type](self, state);
    }
}
*/
#else
GLOBAL_ASM("asm/EnHorseGameCheck_Update.s")
#endif

// GLOBAL_ASM("asm/EnHorseGameCheck_Draw.s")
void EnHorseGameCheck_Draw(Actor* actor, GameState* state) {
}
}
