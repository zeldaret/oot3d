extern "C" {
#include "z_en_kz.hpp"

#define FLAGS 0x00000009

void EnKz_Init(Actor* actor, GameState* state);
void EnKz_Destroy(Actor* actor, GameState* state);
void EnKz_Update(Actor* actor, GameState* state);
void EnKz_Draw(Actor* actor, GameState* state);

void EnKz_PreMweepWait(EnKz* self, PlayState* play);
void EnKz_SetupMweep(EnKz* self, PlayState* play);
void EnKz_Mweep(EnKz* self, PlayState* play);
void EnKz_StopMweep(EnKz* self, PlayState* play);
void EnKz_Wait(EnKz* self, PlayState* play);
void EnKz_SetupGetItem(EnKz* self, PlayState* play);
void EnKz_StartTimer(EnKz* self, PlayState* play);

ActorInit En_Kz_InitVars = {
    ACTOR_EN_KZ,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_KZ,
    sizeof(EnKz),
    (ActorFunc)EnKz_Init,
    (ActorFunc)EnKz_Destroy,
    (ActorFunc)EnKz_Update,
    (ActorFunc)EnKz_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_NONE,
        OCELEM_ON,
    },
    { 80, 120, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInfoInit = { 0, 0, 0, 0, MASS_IMMOVABLE };

static struct_80034EC0_Entry sAnimations[] = {
    { 1, 1.0f, 0.0f, -1.0f, 0, 0.0f },
    { 1, 1.0f, 0.0f, -1.0f, 0, -10.0f },
    { 0, 1.0f, 0.0f, -1.0f, 0, -10.0f },
};

static u16 EnKz_GetTextNoMaskChild(PlayState* play, EnKz* self) {
    Player* player = GET_PLAYER(play);

    if (CHECK_QUEST_ITEM(QUEST_ZORA_SAPPHIRE)) {
        return 0x402B;
    } else if (gSaveContext.eventChkInf[3] & 8) {
        return 0x401C;
    } else {
        player->exchangeItemId = EXCH_ITEM_LETTER_RUTO;
        return 0x401A;
    }
}

static u16 EnKz_GetTextNoMaskAdult(PlayState* play, EnKz* self) {
    Player* player = GET_PLAYER(play);

    if (INV_CONTENT(ITEM_TRADE_ADULT) >= ITEM_FROG) {
        if (!(gSaveContext.infTable[19] & 0x200)) {
            if (CHECK_OWNED_EQUIP(EQUIP_TUNIC, 2)) {
                return 0x401F;
            } else {
                return 0x4012;
            }
        } else if (!CHECK_QUEST_ITEM(QUEST_MEDALLION_WATER) && !CHECK_OWNED_EQUIP(EQUIP_TUNIC, 2)) {
            return 0x40B4;
        } else {
            return CHECK_QUEST_ITEM(QUEST_SONG_SERENADE) ? 0x4045 : 0x401A;
        }
    } else {
        player->exchangeItemId = EXCH_ITEM_PRESCRIPTION;
        return 0x4012;
    }
}

u16 EnKz_GetText(PlayState* play, Actor* actor) {
    EnKz* self = (EnKz*)actor;

    u16 reactionText = Text_GetFaceReaction(play, 0x1E);

    if (reactionText != 0) {
        return reactionText;
    }

    if (LINK_IS_ADULT) {
        return EnKz_GetTextNoMaskAdult(play, self);
    } else {
        return EnKz_GetTextNoMaskChild(play, self);
    }
}

s16 FUN_00173370(PlayState* play, Actor* actor) {
    EnKz* self = (EnKz*)actor;
    s16 ret = 1;

    switch (Message_GetState(&play->msgCtx)) {
        case TEXT_STATE_DONE:
            ret = 0;
            switch (self->actor.textId) {
                case 0x4012:
                    gSaveContext.infTable[19] |= 0x200;
                    ret = 2;
                    break;
                case 0x40B4: {
                    gSaveContext.infTable[19] |= 0x200;

                    s32 getItemId;
                    f32 xzRange;
                    f32 yRange;

                    if (Actor_HasParent(&self->actor, play)) {
                        self->actor.parent = NULL;
                        self->unk_D14 = 1;
                        self->actionFunc = EnKz_StartTimer;
                    } else {
                        getItemId = self->isTrading == true ? GI_FROG : GI_TUNIC_ZORA;
                        yRange = __fabsf(self->actor.yDistToPlayer) + 1.0f;
                        xzRange = self->actor.xzDistToPlayer + 1.0f;
                        self->unk_F4C = getItemId;
                        GiveItem(&self->actor, play, getItemId, xzRange, yRange);
                    }

                    ret = 2;
                    break;
                }
                case 0x401B:
                    if (!Message_ShouldAdvance(play)) {
                        ret = 1;
                    } else {
                        ret = 2;
                    }
                    break;
                case 0x401F:
                    gSaveContext.infTable[19] |= 0x200;
                    ret = 0;
                    break;
            }
            break;
        case TEXT_STATE_DONE_FADING:
            switch (self->actor.textId) {
                case 0x4014:
                    if (!self->sfxPlayed) {
                        FUN_00372244(&play->unk_5FCC, 0x1E, 0x100048C);
                        self->sfxPlayed = true;
                    }
                    break;
                case 0x401B:
                    if (!self->sfxPlayed) {
                        FUN_00372244(&play->unk_5FCC, 0x1E, 0x1000487);
                        self->sfxPlayed = true;
                    }
                    break;
            }
            break;
        case TEXT_STATE_CHOICE:
            if (!Message_ShouldAdvance(play)) {
                break;
            }
            switch (self->actor.textId) {
                case 0x4014:
                    if (FUN_00369f3c(play) == 0) {
                        EnKz_SetupGetItem(self, play);
                        ret = 2;
                    } else {
                        self->actor.textId = 0x4016;
                        Message_ContinueTextbox(play, self->actor.textId);
                    }
                    break;
            }
            break;
        case TEXT_STATE_EVENT:
            if (!Message_ShouldAdvance(play)) {
                break;
            }
            ret = 2;
            break;
        case TEXT_STATE_NONE:
        case TEXT_STATE_DONE_HAS_NEXT:
        case TEXT_STATE_CLOSING:
        case TEXT_STATE_SONG_DEMO_DONE:
        case TEXT_STATE_8:
        case TEXT_STATE_9:
            break;
    }
    return ret;
}

static s32 EnKz_FollowPath(EnKz* self, PlayState* play) {
    Path* path;
    Vec3s* pointPos;
    f32 pathDiffX;
    f32 pathDiffZ;

    if ((self->actor.params & 0xFF00) == 0xFF00) {
        return 0;
    }

    path = &play->setupPathList[(self->actor.params & 0xFF00) >> 8];
    pointPos = path->points;
    pointPos += self->waypoint;

    pathDiffX = pointPos->x - self->actor.world.pos.x;
    pathDiffZ = pointPos->z - self->actor.world.pos.z;
    f32 squares = (SQ(pathDiffX) + SQ(pathDiffZ));
    Math_SmoothStepToS(&self->actor.world.rot.y, (Math_FAtan2F(pathDiffX, pathDiffZ) * (0x8000 / M_PI)), 0xA, 0x3E8, 1);

    if (squares < 10.0f) {
        self->waypoint++;
        if (self->waypoint >= path->count) {
            self->waypoint = 0;
        }
        return 1;
    }
    return 0;
}

static void EnKz_SetMovedPos(EnKz* self, PlayState* play) {

    if ((self->actor.params & 0xFF00) != 0xFF00) {
        Actor* actor = &self->actor;
        Path* path = &play->setupPathList[(self->actor.params & 0xFF00) >> 8];
        Vec3s* lastPointPos = path->points;
        lastPointPos += path->count - 1;

        actor->world.pos.x = lastPointPos->x;
        actor->world.pos.y = lastPointPos->y;
        actor->world.pos.z = lastPointPos->z;
    }
}

void EnKz_Init(Actor* actor, GameState* state) {
    EnKz* self = (EnKz*)actor;
    PlayState* play = (PlayState*)state;

    FUN_00372f38(&self->actor, play, &self->skelAnimModel, 0, 0);
    FUN_00353c9c(&self->actor, play, &self->skelAnime, 0, 1, self->jointTable, self->morphTable, 26);
    SkelAnime_SetFaceAnimations(&self->faceAnims, &self->skelAnime, 0, -1, -1);
    ActorShape_Init(&self->actor.shape, 0.0, NULL, 0.0);
    Collider_InitCylinder(play, &self->collider);
    Collider_SetCylinder(play, &self->collider, &self->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&self->actor.colChkInfo, NULL, &sColChkInfoInit);
    Actor_SetScale(&self->actor, 0.01);
    actor->targetMode = 3;
    self->unk_D14 = 0;
    FUN_003717ac(&self->skelAnime, sAnimations, 0);

    if (gSaveContext.eventChkInf[3] & 8) {
        Actor* actor2 = &self->actor;
        if ((self->actor.params & 0xFF00) != 0xFF00) {
            Path* path = &play->setupPathList[(self->actor.params & 0xFF00) >> 8];
            Vec3s* lastPointPos = path->points;
            lastPointPos += path->count - 1;

            actor2->world.pos.x = lastPointPos->x;
            actor2->world.pos.y = lastPointPos->y;
            actor2->world.pos.z = lastPointPos->z;
        }
    }

    if (LINK_IS_ADULT) {
        if (!(gSaveContext.infTable[19] & 0x100)) {
            Actor_SpawnAsChild(&play->actorCtx, &self->actor, play, ACTOR_BG_ICE_SHELTER,
                               self->actor.world.pos.x, self->actor.world.pos.y, self->actor.world.pos.z, 0, 0, 0,
                               0x04FF);
        }
        self->actionFunc = EnKz_Wait;
    } else {
        self->actionFunc = EnKz_PreMweepWait;
    }
}

void EnKz_Destroy(Actor* actor, GameState* state) {
    EnKz* self = (EnKz*)actor;
    PlayState* play = (PlayState*)state;

    Collider_DestroyCylinder(play, &self->collider);
    FUN_003508b8(&self->actor, self->skelAnimModel, 0);
    SkelAnime_Free2(&self->skelAnime);
    self->faceAnims.Destroy();
}

void EnKz_PreMweepWait(EnKz* self, PlayState* play) {
    if (self->unk_D14 == 2) {
        FUN_003717ac(&self->skelAnime, sAnimations, 2);
        self->unk_D14 = 0;
        self->actionFunc = EnKz_SetupMweep;
    } else {
        FUN_00370f5c(play, self->unk_D4A, self->unk_D62, 12);
    }
}

void EnKz_SetupMweep(EnKz* self, PlayState* play) {
    self->cutsceneCamera = Gameplay_CreateSubCamera(play);
    self->gameplayCamera = play->activeCamera;
    Gameplay_ChangeCameraStatus(play, self->gameplayCamera, CAM_STAT_WAIT);
    Gameplay_ChangeCameraStatus(play, self->cutsceneCamera, CAM_STAT_ACTIVE);
    Vec3f pos = self->actor.world.pos;
    Vec3f initPos = self->actor.home.pos;
    pos.y += 60.0f;
    initPos.y += -100.0f;
    initPos.z += 260.0f;
    Gameplay_CameraSetAtEye(play, self->cutsceneCamera, &pos, &initPos);
    FUN_0036e980(play, &self->actor, 8);
    self->actor.speedXZ = 0.1f;
    self->actionFunc = EnKz_Mweep;
}

void EnKz_Mweep(EnKz* self, PlayState* play) {
    f32 zero = 0.0f;

    Vec3f pos = self->actor.world.pos;
    Vec3f initPos = self->actor.home.pos;
    pos.y += 60.0f;
    initPos.y += -100.0f;
    initPos.z += 260.0f;
    Gameplay_CameraSetAtEye(play, self->cutsceneCamera, &pos, &initPos);
    if ((EnKz_FollowPath(self, play) == 1) && (self->waypoint == 0)) {
        FUN_003717ac(&self->skelAnime, sAnimations, 1);
        Inventory_ReplaceItem(play, ITEM_LETTER_RUTO, ITEM_BOTTLE);
        EnKz_SetMovedPos(self, play);
        gSaveContext.eventChkInf[3] |= 8;
        self->actor.speedXZ = zero;
        self->actionFunc = EnKz_StopMweep;
    }
    if (Animation_OnFrameImpl(&self->skelAnime, 7.0f, 2.0f / 3.0f)) {
        Audio_PlayActorSound2(&self->actor, 0x1000565);
    }
}

void EnKz_StopMweep(EnKz* self, PlayState* play) {
    Gameplay_ChangeCameraStatus(play, self->gameplayCamera, CAM_STAT_ACTIVE);
    Gameplay_ClearCamera(play, self->cutsceneCamera);
    FUN_0036e980(play, &self->actor, 7);
    self->actionFunc = EnKz_Wait;
}

void EnKz_Wait(EnKz* self, PlayState* play) {
    if (self->unk_D14 == 2) {
        self->actionFunc = EnKz_SetupGetItem;
        self->actionFunc(self, play);
    } else {
        FUN_00370f5c(play, self->unk_D4A, self->unk_D62, 12);
    }
}

void EnKz_SetupGetItem(EnKz* self, PlayState* play) {
    s32 getItemId;
    f32 xzRange;
    f32 yRange;

    if (Actor_HasParent(&self->actor, play)) {
        self->actor.parent = NULL;
        self->unk_D14 = 1;
        self->actionFunc = EnKz_StartTimer;
    } else {
        getItemId = self->isTrading == true ? GI_FROG : GI_TUNIC_ZORA;
        yRange = __fabsf(self->actor.yDistToPlayer) + 1.0f;
        xzRange = self->actor.xzDistToPlayer + 1.0f;
        self->unk_F4C = getItemId;
        GiveItem(&self->actor, play, getItemId, xzRange, yRange);
    }
}

void EnKz_StartTimer(EnKz* self, PlayState* play) {
    if ((Message_GetState(&play->msgCtx) == TEXT_STATE_DONE) && Message_ShouldAdvance(play)) {
        if (INV_CONTENT(ITEM_TRADE_ADULT) == ITEM_FROG) {
            if (self->unk_F4C != GI_TUNIC_ZORA) {
                FUN_00371e6c(180); // start timer2 with 3 minutes
            }
            gSaveContext.eventInf[1] &= ~1;
        }
        self->unk_D14 = 0;
        self->actionFunc = EnKz_Wait;
    }
}

#ifdef NON_MATCHING
/*
void EnKz_UpdateEyes(EnKz* self) {
    s16 zero = 0;

    if (DECR(self->blinkTimer) == 0) {
        self->eyeIdx += 1;
        if (self->eyeIdx >= 3) {
            self->blinkTimer = Rand_S16Offset_003702c8(30, 30);
            self->eyeIdx = zero;
        }
    }
}

static s32 func_80A9C95C(PlayState* play, EnKz* self, s16* arg2, f32 unkf, callback1_800343CC callback1,
                         callback2_800343CC callback2) {
    Player* player = GET_PLAYER(play);
    s16 sp32;
    s16 sp30;
    f32 xzDistToPlayer;
    f32 yaw;

    if (Actor_ProcessTalkRequest(&self->actor, play)) {
        *arg2 = 1;
        return 1;
    }

    if (*arg2 != 0) {
        *arg2 = callback2(play, &self->actor);
        return 0;
    }

    yaw = Math_Vec3f_Yaw(&self->actor.home.pos, &player->actor.world.pos);
    yaw -= self->actor.shape.rot.y;
    if ((__fabsf(yaw) > 1638.0f) || (self->actor.xzDistToPlayer < 265.0f)) {
        self->actor.flags &= ~1;
        return 0;
    }

    self->actor.flags |= 1;

    Actor_GetScreenPos(play, &self->actor, &sp32, &sp30);
    if (!((sp32 >= -30) && (sp32 < 361) && (sp30 >= -10) && (sp30 <= 240))) {
        return 0;
    }

    xzDistToPlayer = self->actor.xzDistToPlayer;
    self->actor.xzDistToPlayer = Math_Vec3f_DistXZ(&self->actor.home.pos, &player->actor.world.pos);
    if (FUN_0036bb28(&self->actor, play, unkf) == 0) {
        self->actor.xzDistToPlayer = xzDistToPlayer;
        return 0;
    }
    self->actor.xzDistToPlayer = xzDistToPlayer;
    self->actor.textId = callback1(play, &self->actor);

    return 0;
}

static void func_80A9CB18(EnKz* self, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (func_80A9C95C(play, self, &self->unk_D14, 340.0f, EnKz_GetText, FUN_00173370)) {
        if ((self->actor.textId == 0x401A) && !(gSaveContext.eventChkInf[3] & 8)) {
            if (FUN_0036bc84(play) == EXCH_ITEM_LETTER_RUTO) {
                self->actor.textId = 0x401B;
                self->sfxPlayed = false;
            } else {
                self->actor.textId = 0x401A;
            }
            player->actor.textId = self->actor.textId;
            return;
        }

        if (LINK_IS_ADULT) {
            if ((INV_CONTENT(ITEM_TRADE_ADULT) == ITEM_PRESCRIPTION) &&
                (FUN_0036bc84(play) == EXCH_ITEM_PRESCRIPTION)) {
                self->actor.textId = 0x4014;
                self->sfxPlayed = false;
                player->actor.textId = self->actor.textId;
                self->isTrading = true;
                return;
            }

            self->isTrading = false;
            if (gSaveContext.infTable[19] & 0x200) {
                self->actor.textId = CHECK_QUEST_ITEM(QUEST_SONG_SERENADE) ? 0x4045 : 0x401A;
                player->actor.textId = self->actor.textId;
            } else {
                self->actor.textId = CHECK_OWNED_EQUIP(EQUIP_TUNIC, 2) ? 0x401F : 0x4012;
                player->actor.textId = self->actor.textId;
            }
        }
    }
}

void EnKz_Update(Actor* actor, GameState* state) {
    EnKz* self = (EnKz*)actor;
    PlayState* play = (PlayState*)state;

    if (LINK_IS_ADULT && !(gSaveContext.infTable[19] & 0x100)) {
        gSaveContext.infTable[19] |= 0x100;
    }
    Collider_UpdateCylinder(&self->actor, &self->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &self->collider.base);
    FUN_003731e0(&self->skelAnime);
    EnKz_UpdateEyes(self);
    Actor_MoveForward(&self->actor);
    if (self->actionFunc != EnKz_StartTimer) {
        func_80A9CB18(self, play);
    }
    self->actionFunc(self, play);
}
*/
#else
GLOBAL_ASM("asm/EnKz_Update.s")
#endif

s32 EnKz_OverrideLimbDraw(PlayState* play, s32 limbIndex, MTX34* mtx, void* actor) {
    return 0;
}

void EnKz_PostLimbDraw(PlayState* play, s32 limbIndex, MTX34* mtx, void* actor) {
    EnKz* self = (EnKz*)actor;
    Vector3f vec(0.0f, 2600.0f, 0.0f);

    if (limbIndex == 14) {
        Vector3f* dst = (Vector3f*)&self->actor.focus.pos;

        VEC3TransformAsm(dst, mtx, &vec);
    }
}

void EnKz_Draw(Actor* actor, GameState* state) {
    EnKz* self = (EnKz*)actor;
    FaceAnimations* faceAnims = &self->faceAnims;

    faceAnims->FUN_0035e3a4(0, self->eyeIdx);
    GraphicsContext_UnknownStub(state->gfxCtx);
    SkelAnime_DrawOpa(&self->skelAnime, &self->actor.modelMtx, EnKz_OverrideLimbDraw, EnKz_PostLimbDraw, &self->actor,
                      0);
    self->faceAnims.FUN_0035e330();
}
}
