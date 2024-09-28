extern "C" {
#include "z_en_nb.hpp"

#define FLAGS 0x00000010

void EnNb_Init(Actor* actor, GameState* state);
void EnNb_Destroy(Actor* actor, GameState* state);
void EnNb_Update(Actor* actor, GameState* state);
void EnNb_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Nb.data.s")

ActorInit En_Nb_InitVars = {
    ACTOR_EN_NB,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_NB,
    sizeof(EnNb),
    (ActorFunc)EnNb_Init,
    (ActorFunc)EnNb_Destroy,
    (ActorFunc)EnNb_Update,
    (ActorFunc)EnNb_Draw,
};

GLOBAL_ASM("asm/EnNb_Init.s")

GLOBAL_ASM("asm/EnNb_Destroy.s")

GLOBAL_ASM("asm/EnNb_Update.s")

GLOBAL_ASM("asm/EnNb_Draw.s")
}
