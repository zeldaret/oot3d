extern "C" {
#include "z_bg_treemouth.hpp"

#define FLAGS 0x80400030

void BgTreemouth_Init(Actor* actor, GameState* state);
void BgTreemouth_Destroy(Actor* actor, GameState* state);
void BgTreemouth_Update(Actor* actor, GameState* state);
void BgTreemouth_Draw(Actor* actor, GameState* state);

void FUN_0016e7f8(BgTreemouth* self, PlayState* play);
void FUN_001944c0(BgTreemouth* self, PlayState* play);
void FUN_001e466c(BgTreemouth* self, PlayState* play);
void FUN_002021a0(BgTreemouth* self, PlayState* play);
void FUN_00218d88(BgTreemouth* self, PlayState* play);
void FUN_003f48c4(BgTreemouth* self, PlayState* play);
void BgTreemouth_DoNothing(BgTreemouth* self, PlayState* play);

ActorInit Bg_Treemouth_InitVars = {
    ACTOR_BG_TREEMOUTH,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT04_OBJECTS,
    sizeof(BgTreemouth),
    (ActorFunc)BgTreemouth_Init,
    (ActorFunc)BgTreemouth_Destroy,
    (ActorFunc)BgTreemouth_Update,
    (ActorFunc)BgTreemouth_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_U8(targetMode, 5, ICHAIN_CONTINUE),
    ICHAIN_VEC3F(scale, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 8000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 300, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 300, ICHAIN_STOP),
};

static void BgTreemouth_SetupAction(BgTreemouth* self, BgTreemouthActionFunc actionFunc) {
    self->actionFunc = actionFunc;
}

void BgTreemouth_Init(Actor* actor, GameState* state) {
    BgTreemouth* self = (BgTreemouth*)actor;
    PlayState* play = (PlayState*)state;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(actor, sInitChain);
    self->dyna.actor.unk_19A = 1;
    FUN_00372f38(&self->dyna.actor, play, &self->skelAnimModel, 2, 0);
    DynaPolyActor_Init(&self->dyna, DPM_UNK);
    ReadCollisionHeaderFromZsi(play->GetObjectStatus(self->dyna.actor.objBankIndex)->zarInfo.FUN_003532c0(0),
                              &colHeader);
    self->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, actor, colHeader);
    ActorShape_Init(&actor->shape, 0.0f, NULL, 0.0f);
    Actor_SetFocus(actor, 50.0f);

    if ((gSaveContext.sceneSetupIndex < 4) && !LINK_IS_ADULT) {
        BgTreemouth_SetupAction(self, FUN_003f48c4);
    } else if (LINK_IS_ADULT || (gSaveContext.sceneSetupIndex == 7)) {
        self->unk_1C0 = 0.0f;
        BgTreemouth_SetupAction(self, BgTreemouth_DoNothing);
    } else {
        self->unk_1C0 = 1.0f;
        BgTreemouth_SetupAction(self, FUN_001e466c);
    }

    actor->textId = 0x905;
}

void BgTreemouth_Destroy(Actor* actor, GameState* state) {
    BgTreemouth* self = (BgTreemouth*)actor;
    PlayState* play = (PlayState*)state;

    FUN_00350f34(&self->dyna.actor, &self->skelAnimModel, 0);
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, self->dyna.bgId);
}

void FUN_0016e5a4(BgTreemouth* self, PlayState* play) {
    CsCmdActorAction* npcAction;

    if ((play->GetCutsceneState() != CS_STATE_IDLE)) {
        npcAction = play->csCtx.npcActions[0];
        if (npcAction != NULL) {
            if (npcAction->action == 2) {
                BgTreemouth_SetupAction(self, FUN_002021a0);
            } else if (npcAction->action == 3) {
                Audio_PlaySoundGeneral(0x10001BD, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
                BgTreemouth_SetupAction(self, FUN_001e466c);
            }
        }
    }
}

void FUN_001e466c(BgTreemouth* self, PlayState* play) {
    Vec3f sp34;

    if (self->unk_1C0 < 1.0f) {
        self->unk_1C0 += ADJUST_F32_FOR_FRAMERATE(0.01f);
    } else {
        self->unk_1C0 = 1.0f;
    }

    if ((gSaveContext.sceneSetupIndex == 6) && !(ADJUST_FRAMECOUNT(700) >= play->csCtx.frames) &&
        (play->state.frames % 8 == 0)) {
        sp34.x = (Rand_ZeroOne() * 1158.0f) + 3407.0f;
        sp34.y = 970.0f;
        sp34.z = (Rand_ZeroOne() * 2026.0f) + -2163.0f;
        EffectSsHahen_SpawnBurst(play, &sp34, 0.8f, 0, 50, 30, 1, -1, 10, NULL);
    }
}

void FUN_002021a0(BgTreemouth* self, PlayState* play) {
    self->unk_1C0 += ADJUST_F32_FOR_FRAMERATE(0.05f);
    if (self->unk_1C0 >= 0.8f) {
        BgTreemouth_SetupAction(self, FUN_00218d88);
    }
}

void FUN_00218d88(BgTreemouth* self, PlayState* play) {
    self->unk_1C0 -= ADJUST_F32_FOR_FRAMERATE(0.03f);
    if (self->unk_1C0 <= 0.0f) {
        BgTreemouth_SetupAction(self, FUN_0016e5a4);
    }
}

void FUN_003f48c4(BgTreemouth* self, PlayState* play) {
    if ((!(Flags_GetEventChkInf(5))) || LINK_IS_ADULT) {
        if (!LINK_IS_ADULT) {
            if (Flags_GetEventChkInf(0xC)) {
                if (Actor_IsFacingAndNearPlayer(&self->dyna.actor, 1658.0f, 0x7530)) {
                    self->dyna.actor.flags |= 1;
                    if (self->dyna.actor.isTargeted) {
                        self->dyna.actor.flags &= ~1;
                        play->FUN_0037573c(
                            play->GetObjectStatus(self->dyna.actor.objBankIndex)->zarInfo.GetQDBByIndex(1));
                        gSaveContext.cutsceneTrigger = 1;
                        BgTreemouth_SetupAction(self, FUN_0016e7f8);
                    }
                }
            } else if (Actor_IsFacingAndNearPlayer(&self->dyna.actor, 1658.0f, 0x4E20)) {
                Flags_SetEventChkInf(0xC);
                play->FUN_0037573c(
                    play->GetObjectStatus(self->dyna.actor.objBankIndex)->zarInfo.GetQDBByIndex(0));
                gSaveContext.cutsceneTrigger = 1;
                BgTreemouth_SetupAction(self, FUN_0016e7f8);
            }
        }
    } else {
        self->unk_1C0 = 1.0f;
    }
}

void FUN_0016e7f8(BgTreemouth* self, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (play->GetCutsceneState() == CS_STATE_UNSKIPPABLE_INIT) {
        if (Actor_IsFacingAndNearPlayer(&self->dyna.actor, 350.0f, 0x7530)) {
            player->actor.world.pos.x = 3827.0f;
            player->actor.world.pos.y = -161.0f;
            player->actor.world.pos.z = -1142.0f;
        }

        play->csCtx.frames = 0;
        play->csCtx.unk_28 = 0xFFFF;
        play->csCtx.unk_2A = 0xFFFF;
        play->csCtx.unk_2C = 0xFFFF;
        play->csCtx.unk_2E = 0xFFFF;
        play->csCtx.unk_34 = 0;
        play->csCtx.unk_35 = 0;

        play->SetCutsceneState(CS_STATE_SKIPPABLE_EXEC);

        if (FUN_00369f3c(play) == 0) {
            play->FUN_0037573c(
                play->GetObjectStatus(self->dyna.actor.objBankIndex)->zarInfo.GetQDBByIndex(2));
            Flags_SetEventChkInf(5);
            BgTreemouth_SetupAction(self, FUN_001944c0);
        } else {
            play->FUN_0037573c(
                play->GetObjectStatus(self->dyna.actor.objBankIndex)->zarInfo.GetQDBByIndex(3));
            play->csCtx.frames = 0;
            BgTreemouth_SetupAction(self, FUN_003f48c4);
        }
    }
}

void FUN_001944c0(BgTreemouth* self, PlayState* play) {
    CsCmdActorAction* npcAction;

    if (play->GetCutsceneState() != CS_STATE_IDLE) {
        npcAction = play->csCtx.npcActions[0];
        if (npcAction != NULL) {
            if (npcAction->action == 2) {
                BgTreemouth_SetupAction(self, FUN_002021a0);
            } else if (npcAction->action == 3) {
                Audio_PlaySoundGeneral(0x10001BD, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
                BgTreemouth_SetupAction(self, FUN_001e466c);
            }
        }
    }
}

void BgTreemouth_DoNothing(BgTreemouth* self, PlayState* play) {
}

void BgTreemouth_Update(Actor* actor, GameState* state) {
    static const Vector3f unused1(-2746.0f, 545.0f, 4694.0f);
    static const Vector3f unused2(-2654.0f, 146.0f, 4534.0f);

    BgTreemouth* self = (BgTreemouth*)actor;
    PlayState* play = (PlayState*)state;

    self->actionFunc(self, play);
    self->dyna.actor.world.pos.x = (self->unk_1C0 * -160.0f) + 4029.0f;
    self->dyna.actor.world.pos.y = (self->unk_1C0 * -399.0f) + 136.0f;
    self->dyna.actor.world.pos.z = (self->unk_1C0 * 92.0f) + -1255.0f;
}

void BgTreemouth_Draw(Actor* actor, GameState* state) {
    PlayState* play = (PlayState*)state;
    u16 alpha = 0;

    if (gSaveContext.sceneSetupIndex == 6) {
        alpha = play->roomCtx.unk_7C0;
    } else if ((gSaveContext.sceneSetupIndex < 4) || LINK_IS_ADULT) {
        if (gSaveContext.eventChkInf[0] & 0x80) {
            alpha = 1660;
        }
    } else {
        alpha = 0;
    }

    BgTreemouth* self = (BgTreemouth*)actor;

    FUN_003695cc(self->skelAnimModel, 0, 4, 2, 0.5019608f, 0.5019608f, 0.5019608f, 1.0f - alpha * 0.000602409651037f);
    self->skelAnimModel->FUN_003721e0(&self->dyna.actor.modelMtx);
    self->skelAnimModel->SetUnkAC(1);
    self->skelAnimModel->FUN_00372170(0);
}
}
