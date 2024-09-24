extern "C" {
#include "z_en_ds.hpp"

#define FLAGS 0x00000009

void EnDs_Init(Actor* actor, GameState* state);
void EnDs_Destroy(Actor* actor, GameState* state);
void EnDs_Update(Actor* actor, GameState* state);
void EnDs_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ds.data.s")

ActorInit En_Ds_InitVars = {
    ACTOR_EN_DS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DS,
    sizeof(EnDs),
    (ActorFunc)EnDs_Init,
    (ActorFunc)EnDs_Destroy,
    (ActorFunc)EnDs_Update,
    (ActorFunc)EnDs_Draw,
};

GLOBAL_ASM("asm/EnDs_Init.s")

GLOBAL_ASM("asm/EnDs_Destroy.s")

GLOBAL_ASM("asm/EnDs_Update.s")

GLOBAL_ASM("asm/EnDs_Draw.s")
}
