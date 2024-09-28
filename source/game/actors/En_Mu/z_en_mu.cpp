extern "C" {
#include "z_en_mu.hpp"

#define FLAGS 0x00000009

void EnMu_Init(Actor* actor, GameState* state);
void EnMu_Destroy(Actor* actor, GameState* state);
void EnMu_Update(Actor* actor, GameState* state);
void EnMu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Mu.data.s")

ActorInit En_Mu_InitVars = {
    ACTOR_EN_MU,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MU,
    sizeof(EnMu),
    (ActorFunc)EnMu_Init,
    (ActorFunc)EnMu_Destroy,
    (ActorFunc)EnMu_Update,
    (ActorFunc)EnMu_Draw,
};

GLOBAL_ASM("asm/EnMu_Init.s")

GLOBAL_ASM("asm/EnMu_Destroy.s")

GLOBAL_ASM("asm/EnMu_Update.s")

GLOBAL_ASM("asm/EnMu_Draw.s")
}
