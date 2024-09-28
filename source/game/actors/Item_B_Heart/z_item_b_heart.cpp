extern "C" {
#include "z_item_b_heart.hpp"

#define FLAGS 0x00000000

void ItemBHeart_Init(Actor* actor, GameState* state);
void ItemBHeart_Destroy(Actor* actor, GameState* state);
void ItemBHeart_Update(Actor* actor, GameState* state);
void ItemBHeart_Draw(Actor* actor, GameState* state);

ActorInit Item_B_Heart_InitVars = {
    ACTOR_ITEM_B_HEART,
    ACTORCAT_MISC,
    FLAGS,
    OBJECT_GI_HEARTS,
    sizeof(ItemBHeart),
    (ActorFunc)ItemBHeart_Init,
    (ActorFunc)ItemBHeart_Destroy,
    (ActorFunc)ItemBHeart_Update,
    (ActorFunc)ItemBHeart_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 800, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 800, ICHAIN_STOP),
};

void ItemBHeart_Init(Actor* actor, GameState* state) {
    ItemBHeart* self = (ItemBHeart*)actor;
    PlayState* play = (PlayState*)state;

    if (Flags_GetCollectible(play, 0x1F)) {
        Actor_Kill(&self->actor);
    } else {
        Actor_ProcessInitChain(&self->actor, sInitChain);
        ActorShape_Init(&self->actor.shape, 0.0f, NULL, 0.8f);
        self->actor.unk_19A = 1;
        FUN_00372f38(&self->actor, play, &self->skelAnimModel, 0, 0);
    }
}

void ItemBHeart_Destroy(Actor* actor, GameState* state) {
    ItemBHeart* self = (ItemBHeart*)actor;

    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

static void ItemBHeart_UpdateShapeAndPos(ItemBHeart* self, PlayState* play) {
    f32 yOffset;

    self->unk_1C0++;
    yOffset = (Math_SinS(self->unk_1C0 * 0x60C) * 5.0f) + 20.0f;
    Math_ApproachF(&self->actor.world.pos.y, self->actor.home.pos.y + yOffset, 0.1f, self->unk_1B4);
    Math_ApproachF(&self->unk_1B4, 2.0f, 1.0f, 0.1f);

    self->actor.shape.rot.y += 0x400;

    Actor* actor = &self->actor;

    Math_ApproachF(&actor->scale.x, 0.4f, 0.1f, 0.01f);
    actor->scale.y = actor->scale.z = actor->scale.x;
}

void ItemBHeart_Update(Actor* actor, GameState* state) {
    ItemBHeart* self = (ItemBHeart*)actor;
    PlayState* play = (PlayState*)state;

    ItemBHeart_UpdateShapeAndPos(self, play);
    Actor_UpdateBgCheckInfo(play, &self->actor, 0.0f, 0.0f, 0.0f, 4);
    if (Actor_HasParent(&self->actor, play)) {
        Flags_SetCollectible(play, 0x1F);
        Actor_Kill(&self->actor);
    } else {
        GiveItem(&self->actor, play, GI_HEART_CONTAINER_2, 30.0f, 40.0f);
    }
}

void ItemBHeart_Draw(Actor* actor, GameState* state) {
    ItemBHeart* self = (ItemBHeart*)actor;

    self->skelAnimModel->FUN_003721e0(&self->actor.modelMtx);
    self->skelAnimModel->SetUnkAC(1);
    self->skelAnimModel->FUN_00372170(1);
}
}
