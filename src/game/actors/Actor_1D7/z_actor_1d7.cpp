extern "C" {
#include "z_actor_1d7.hpp"

#define FLAGS 0x80000000

void Actor1D7_Init(Actor* actor, GameState* state);
void Actor1D7_Destroy(Actor* actor, GameState* state);
void Actor1D7_Update(Actor* actor, GameState* state);
void Actor1D7_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Actor_1D7.data.s")

ActorInit Actor_1D7_InitVars = {
    ACTOR_1D7,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_YDAN_OBJECTS,
    sizeof(Actor1D7),
    (ActorFunc)Actor1D7_Init,
    (ActorFunc)Actor1D7_Destroy,
    (ActorFunc)Actor1D7_Update,
    (ActorFunc)Actor1D7_Draw,
};

GLOBAL_ASM("asm/Actor1D7_Init.s")

GLOBAL_ASM("asm/Actor1D7_Destroy.s")

GLOBAL_ASM("asm/Actor1D7_Update.s")

GLOBAL_ASM("asm/Actor1D7_Draw.s")
}
