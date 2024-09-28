extern "C" {
#include "z_en_bombf.hpp"

#define FLAGS 0x80000011

void EnBombf_Init(Actor* actor, GameState* state);
void EnBombf_Destroy(Actor* actor, GameState* state);
void EnBombf_Update(Actor* actor, GameState* state);
void EnBombf_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bombf.data.s")

ActorInit En_Bombf_InitVars = {
    ACTOR_EN_BOMBF,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BOMBF,
    sizeof(EnBombf),
    (ActorFunc)EnBombf_Init,
    (ActorFunc)EnBombf_Destroy,
    (ActorFunc)EnBombf_Update,
    (ActorFunc)EnBombf_Draw,
};

GLOBAL_ASM("asm/EnBombf_Init.s")

GLOBAL_ASM("asm/EnBombf_Destroy.s")

GLOBAL_ASM("asm/EnBombf_Update.s")

GLOBAL_ASM("asm/EnBombf_Draw.s")
}
