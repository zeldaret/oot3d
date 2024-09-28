extern "C" {
#include "z_en_insect.hpp"

#define FLAGS 0x00000000

void EnInsect_Init(Actor* actor, GameState* state);
void EnInsect_Destroy(Actor* actor, GameState* state);
void EnInsect_Update(Actor* actor, GameState* state);
void EnInsect_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Insect.data.s")

ActorInit En_Insect_InitVars = {
    ACTOR_EN_INSECT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnInsect),
    (ActorFunc)EnInsect_Init,
    (ActorFunc)EnInsect_Destroy,
    (ActorFunc)EnInsect_Update,
    (ActorFunc)EnInsect_Draw,
};

GLOBAL_ASM("asm/EnInsect_Init.s")

GLOBAL_ASM("asm/EnInsect_Destroy.s")

GLOBAL_ASM("asm/EnInsect_Update.s")

GLOBAL_ASM("asm/EnInsect_Draw.s")
}
