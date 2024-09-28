extern "C" {
#include "z_fishing.hpp"

#define FLAGS 0x00000010

void Fishing_Init(Actor* actor, GameState* state);
void Fishing_Destroy(Actor* actor, GameState* state);
void Fishing_Update(Actor* actor, GameState* state);
void Fishing_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Fishing.data_00531294.s")
GLOBAL_ASM("data/z_Fishing.data_0053142C.s")

ActorInit Fishing_InitVars = {
    ACTOR_FISHING,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_FISH,
    sizeof(Fishing),
    (ActorFunc)Fishing_Init,
    (ActorFunc)Fishing_Destroy,
    (ActorFunc)Fishing_Update,
    (ActorFunc)Fishing_Draw,
};

GLOBAL_ASM("asm/Fishing_Init.s")

GLOBAL_ASM("asm/Fishing_Destroy.s")

GLOBAL_ASM("asm/Fishing_Update.s")

GLOBAL_ASM("asm/Fishing_Draw.s")
}
