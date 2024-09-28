extern "C" {
#include "z_actor_1da.hpp"

#define FLAGS 0x00000010

void Actor1DA_Init(Actor* actor, GameState* state);
void Actor1DA_Destroy(Actor* actor, GameState* state);
void Actor1DA_Update(Actor* actor, GameState* state);

ActorInit Actor_1DA_InitVars = {
    ACTOR_1DA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(Actor1DA),
    (ActorFunc)Actor1DA_Init,
    (ActorFunc)Actor1DA_Destroy,
    (ActorFunc)Actor1DA_Update,
    NULL,
};

#ifdef NON_MATCHING
static
#endif
InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 200, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 1000, ICHAIN_STOP),
};

#ifdef NON_MATCHING
// Both functions off by a register swap. Interestingly, both match if -Otime is removed
void Actor1DA_Init(Actor* actor, GameState* state) {
    Actor1DA* self = (Actor1DA*)actor;
    PlayState* play = (PlayState*)state;

    Actor_ProcessInitChain(actor, sInitChain);
    DynaPolyActor_Init(&self->dyna, DPM_PLAYER);

    CollisionHeader* colHeader = NULL;
    ReadCollisionHeaderFromZsi(DynaPolyInfo_Alloc(&self->dyna, state, 7), &colHeader);
    self->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &self->dyna.actor, colHeader);
}

void Actor1DA_Destroy(Actor* actor, GameState* state) {
    Actor1DA* self = (Actor1DA*)actor;
    PlayState* play = (PlayState*)state;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, self->dyna.bgId);
}
#else
GLOBAL_ASM("asm/Actor1DA_Init.s")

GLOBAL_ASM("asm/Actor1DA_Destroy.s")
#endif

static inline void Actor1DA_UpdateUnknown(Actor1DA* self, PlayState* play) {
    if (FUN_00374be8(play, 2)) {
        FUN_0036b940(play, &play->colCtx.dyna, self->dyna.bgId);
    } else {
        FUN_0036d15c(play, &play->colCtx.dyna, self->dyna.bgId);
    }
}

void Actor1DA_Update(Actor* actor, GameState* state) {
    Actor1DA* self = (Actor1DA*)actor;
    PlayState* play = (PlayState*)state;

    if (self->dyna.actor.params == 0) {
        Actor1DA_UpdateUnknown(self, play);
    }
}

}
