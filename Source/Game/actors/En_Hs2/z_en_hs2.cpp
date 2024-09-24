extern "C" {
#include "z_en_hs2.hpp"

#define FLAGS 0x00000009

void EnHs2_Init(Actor* actor, GameState* state);
void EnHs2_Destroy(Actor* actor, GameState* state);
void EnHs2_Update(Actor* actor, GameState* state);
void EnHs2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Hs2.data.s")

ActorInit En_Hs2_InitVars = {
    ACTOR_EN_HS2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_HS,
    sizeof(EnHs2),
    (ActorFunc)EnHs2_Init,
    (ActorFunc)EnHs2_Destroy,
    (ActorFunc)EnHs2_Update,
    (ActorFunc)EnHs2_Draw,
};

GLOBAL_ASM("asm/EnHs2_Init.s")

GLOBAL_ASM("asm/EnHs2_Destroy.s")

GLOBAL_ASM("asm/EnHs2_Update.s")

GLOBAL_ASM("asm/EnHs2_Draw.s")
}
