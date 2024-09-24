extern "C" {
#include "z_en_niw_lady.hpp"

#define FLAGS 0x00000019

void EnNiwLady_Init(Actor* actor, GameState* state);
void EnNiwLady_Destroy(Actor* actor, GameState* state);
void EnNiwLady_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Niw_Lady.data.s")

ActorInit En_Niw_Lady_InitVars = {
    ACTOR_EN_NIW_LADY,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ANE,
    sizeof(EnNiwLady),
    (ActorFunc)EnNiwLady_Init,
    (ActorFunc)EnNiwLady_Destroy,
    (ActorFunc)EnNiwLady_Update,
    NULL,
};

GLOBAL_ASM("asm/EnNiwLady_Init.s")

GLOBAL_ASM("asm/EnNiwLady_Destroy.s")

GLOBAL_ASM("asm/EnNiwLady_Update.s")
}
