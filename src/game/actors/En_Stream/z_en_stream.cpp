extern "C" {
#include "z_en_stream.hpp"

#define FLAGS 0x80400010

void EnStream_Init(Actor* actor, GameState* state);
void EnStream_Destroy(Actor* actor, GameState* state);
void EnStream_Update(Actor* actor, GameState* state);
void EnStream_Draw(Actor* actor, GameState* state);

void EnStream_WaitForPlayer(EnStream* self, PlayState* play);

ActorInit En_Stream_InitVars = {
    ACTOR_EN_STREAM,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_STREAM,
    sizeof(EnStream),
    (ActorFunc)EnStream_Init,
    (ActorFunc)EnStream_Destroy,
    (ActorFunc)EnStream_Update,
    (ActorFunc)EnStream_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 20, ICHAIN_STOP),
};

static void EnStream_SetupAction(EnStream* self, EnStreamActionFunc actionFunc) {
    self->actionFunc = actionFunc;
}

void EnStream_Init(Actor* actor, GameState* state) {
    EnStream* self = (EnStream*)actor;
    PlayState* play = (PlayState*)state;

    self->unk_1A8 = self->actor.params & 0xFF;
    ZARInfo* zarInfo = FUN_00372f38(actor, play, &self->skelAnimModel, 0, 0);
    self->skelAnimModel->unk_0C->FUN_00372d94(zarInfo->GetCMABByIndex(0));
    self->skelAnimModel->unk_0C->SetAnimType(1);
    self->skelAnimModel->unk_0C->SetAnimSpeed(2.0f);
    Actor_ProcessInitChain(actor, sInitChain);
    if (self->unk_1A8 == 1) {
        actor->scale.y = 0.01f;
    }

    EnStream_SetupAction(self, EnStream_WaitForPlayer);
}

void EnStream_Destroy(Actor* actor, GameState* state) {
    EnStream* self = (EnStream*)actor;

    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

static s32 EnStream_PlayerIsInRange(Vec3f* vortexWorldPos, Vec3f* playerWorldPos, Vec3f* posDifference, f32 vortexYScale) {
    f32 upperBounds = 160 * vortexYScale * 50.0f;
    f32 lowerBounds = 0 * vortexYScale * 50.0f;
    f32 smallConstant;
    f32 xzDist;
    f32 range;
    s32 ret = 0;

    smallConstant = 28.0f;
    
    posDifference->x = playerWorldPos->x - vortexWorldPos->x;
    posDifference->y = playerWorldPos->y - vortexWorldPos->y;
    posDifference->z = playerWorldPos->z - vortexWorldPos->z;
    xzDist = sqrtf(SQ(posDifference->x) + SQ(posDifference->z));

    if (lowerBounds <= posDifference->y && posDifference->y <= upperBounds) {
        posDifference->y -= lowerBounds;

        range = ((75.0f - smallConstant) * (posDifference->y / (upperBounds - lowerBounds))) + smallConstant;
        if (xzDist <= range) {
            ret = 1;
        }
    }

    if ((posDifference->y <= lowerBounds) && (xzDist <= smallConstant)) {
        ret = 2;
    }

    return ret;
}

#ifdef NON_MATCHING
void EnStream_SuckPlayer(EnStream* self, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Actor* actor = &self->actor;
    Vec3f posDifference;
    f32 xzDist;
    f32 yDistWithOffset;
    f32 temp;
    s32 ret = EnStream_PlayerIsInRange(&actor->world.pos, &player->actor.world.pos, &posDifference, actor->scale.y);

    if (ret != 0) {
        xzDist = sqrtf(SQ(posDifference.x) + SQ(posDifference.z));
        yDistWithOffset = player->actor.world.pos.y - (actor->world.pos.y - 90.0f);
        temp = Math_FAtan2F(-posDifference.x, -posDifference.z) * (0x8000 / M_PI);
        player->pushedYaw = temp;
        if (xzDist > 3.0f) {
            Math_SmoothStepToF(&player->pushedSpeed, 3.0f, 0.5f, xzDist, 0.0f);
        } else {
            player->pushedSpeed = 0.0f;
            Math_SmoothStepToF(&player->actor.world.pos.x, actor->world.pos.x, 0.5f, 3.0f, 0.0f);
            Math_SmoothStepToF(&player->actor.world.pos.z, actor->world.pos.z, 0.5f, 3.0f, 0.0f);
        }

        if (yDistWithOffset > 0.0f) {
            Math_SmoothStepToF(&player->actor.velocity.y, -3.0f, 0.7f, yDistWithOffset, 0.0f);
            if (posDifference.y < -70.0f) {
                player->stateFlags2 |= 0x80000000;
            }
        }
    } else {
        EnStream_SetupAction(self, EnStream_WaitForPlayer);
    }
}
#else
void EnStream_SuckPlayer(EnStream* self, PlayState* play);
GLOBAL_ASM("asm/EnStream_SuckPlayer.s")
#endif

void EnStream_WaitForPlayer(EnStream* self, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f temp;

    if (EnStream_PlayerIsInRange(&self->actor.world.pos, &player->actor.world.pos, &temp, self->actor.scale.y) != 0) {
        EnStream_SetupAction(self, EnStream_SuckPlayer);
    }
}

void EnStream_Update(Actor* actor, GameState* state) {
    EnStream* self = (EnStream*)actor;
    PlayState* play = (PlayState*)state;

    self->actionFunc(self, play);
    FUN_0035ae08(&self->actor, 0x1000234);
}

void EnStream_Draw(Actor* actor, GameState* state) {
    EnStream* self = (EnStream*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);

    f32 animSpeed = 2.0f;
    if (PauseContext_GetState() != 0) {
        animSpeed = 0.0f;
    }

    self->skelAnimModel->unk_0C->SetAnimSpeed(animSpeed);
    self->skelAnimModel->SetUnkAC(1);
    self->skelAnimModel->FUN_003721e0(&modelMtx);
    self->skelAnimModel->FUN_00372170(0);
}
}
