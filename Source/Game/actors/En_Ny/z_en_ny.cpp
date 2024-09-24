extern "C" {
#include "z_en_ny.hpp"

#define FLAGS 0x00000005

void EnNy_Init(Actor* actor, GameState* state);
void EnNy_Destroy(Actor* actor, GameState* state);
void EnNy_Update(Actor* actor, GameState* state);
void EnNy_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ny.data.s")

ActorInit En_Ny_InitVars = {
    ACTOR_EN_NY,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_NY,
    sizeof(EnNy),
    (ActorFunc)EnNy_Init,
    (ActorFunc)EnNy_Destroy,
    (ActorFunc)EnNy_Update,
    (ActorFunc)EnNy_Draw,
};

GLOBAL_ASM("asm/EnNy_Init.s")

GLOBAL_ASM("asm/EnNy_Destroy.s")

GLOBAL_ASM("asm/EnNy_Update.s")

GLOBAL_ASM("asm/EnNy_Draw.s")
}
