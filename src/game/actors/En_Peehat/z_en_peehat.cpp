extern "C" {
#include "z_en_peehat.hpp"

#define FLAGS 0x01000015

void EnPeehat_Init(Actor* actor, GameState* state);
void EnPeehat_Destroy(Actor* actor, GameState* state);
void EnPeehat_Update(Actor* actor, GameState* state);
void EnPeehat_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Peehat.data.s")

ActorInit En_Peehat_InitVars = {
    ACTOR_EN_PEEHAT,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_PEEHAT,
    sizeof(EnPeehat),
    (ActorFunc)EnPeehat_Init,
    (ActorFunc)EnPeehat_Destroy,
    (ActorFunc)EnPeehat_Update,
    (ActorFunc)EnPeehat_Draw,
};

GLOBAL_ASM("asm/EnPeehat_Init.s")

GLOBAL_ASM("asm/EnPeehat_Destroy.s")

GLOBAL_ASM("asm/EnPeehat_Update.s")

GLOBAL_ASM("asm/EnPeehat_Draw.s")
}
