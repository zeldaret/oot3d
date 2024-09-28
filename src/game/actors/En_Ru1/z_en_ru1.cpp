extern "C" {
#include "z_en_ru1.hpp"

#define FLAGS 0x04000011

void EnRu1_Init(Actor* actor, GameState* state);
void EnRu1_Destroy(Actor* actor, GameState* state);
void EnRu1_Update(Actor* actor, GameState* state);
void EnRu1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ru1.data.s")

ActorInit En_Ru1_InitVars = {
    ACTOR_EN_RU1,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_RU1,
    sizeof(EnRu1),
    (ActorFunc)EnRu1_Init,
    (ActorFunc)EnRu1_Destroy,
    (ActorFunc)EnRu1_Update,
    (ActorFunc)EnRu1_Draw,
};

GLOBAL_ASM("asm/EnRu1_Init.s")

GLOBAL_ASM("asm/EnRu1_Destroy.s")

GLOBAL_ASM("asm/EnRu1_Update.s")

GLOBAL_ASM("asm/EnRu1_Draw.s")
}
