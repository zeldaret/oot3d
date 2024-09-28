extern "C" {
#include "z_en_bird.hpp"

#define FLAGS 0x80000000

void EnBird_Init(Actor* actor, GameState* state);
void EnBird_Destroy(Actor* actor, GameState* state);
void EnBird_Update(Actor* actor, GameState* state);
void EnBird_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bird.data.s")

ActorInit En_Bird_InitVars = {
    ACTOR_EN_BIRD,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BIRD,
    sizeof(EnBird),
    (ActorFunc)EnBird_Init,
    (ActorFunc)EnBird_Destroy,
    (ActorFunc)EnBird_Update,
    (ActorFunc)EnBird_Draw,
};

GLOBAL_ASM("asm/EnBird_Init.s")

GLOBAL_ASM("asm/EnBird_Destroy.s")

GLOBAL_ASM("asm/EnBird_Update.s")

GLOBAL_ASM("asm/EnBird_Draw.s")
}
