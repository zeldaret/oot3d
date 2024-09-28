extern "C" {
#include "z_en_dnt_nomal.hpp"

#define FLAGS 0x00000030

void EnDntNomal_Init(Actor* actor, GameState* state);
void EnDntNomal_Destroy(Actor* actor, GameState* state);
void EnDntNomal_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dnt_Nomal.data.s")

ActorInit En_Dnt_Nomal_InitVars = {
    ACTOR_EN_DNT_NOMAL,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnDntNomal),
    (ActorFunc)EnDntNomal_Init,
    (ActorFunc)EnDntNomal_Destroy,
    (ActorFunc)EnDntNomal_Update,
    NULL,
};

GLOBAL_ASM("asm/EnDntNomal_Init.s")

GLOBAL_ASM("asm/EnDntNomal_Destroy.s")

GLOBAL_ASM("asm/EnDntNomal_Update.s")
}
