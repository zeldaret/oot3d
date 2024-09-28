extern "C" {
#include "z_en_tite.hpp"

#define FLAGS 0x00000015

void EnTite_Init(Actor* actor, GameState* state);
void EnTite_Destroy(Actor* actor, GameState* state);
void EnTite_Update(Actor* actor, GameState* state);
void EnTite_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tite.data.s")

ActorInit En_Tite_InitVars = {
    ACTOR_EN_TITE,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_TITE,
    sizeof(EnTite),
    (ActorFunc)EnTite_Init,
    (ActorFunc)EnTite_Destroy,
    (ActorFunc)EnTite_Update,
    (ActorFunc)EnTite_Draw,
};

GLOBAL_ASM("asm/EnTite_Init.s")

GLOBAL_ASM("asm/EnTite_Destroy.s")

GLOBAL_ASM("asm/EnTite_Update.s")

GLOBAL_ASM("asm/EnTite_Draw.s")
}
