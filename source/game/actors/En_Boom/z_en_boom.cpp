extern "C" {
#include "z_en_boom.hpp"

#define FLAGS 0x00000030

void EnBoom_Init(Actor* actor, GameState* state);
void EnBoom_Destroy(Actor* actor, GameState* state);
void EnBoom_Update(Actor* actor, GameState* state);
void EnBoom_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Boom.data.s")

ActorInit En_Boom_InitVars = {
    ACTOR_EN_BOOM,
    ACTORCAT_MISC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnBoom),
    (ActorFunc)EnBoom_Init,
    (ActorFunc)EnBoom_Destroy,
    (ActorFunc)EnBoom_Update,
    (ActorFunc)EnBoom_Draw,
};

GLOBAL_ASM("asm/EnBoom_Init.s")

GLOBAL_ASM("asm/EnBoom_Destroy.s")

GLOBAL_ASM("asm/EnBoom_Update.s")

GLOBAL_ASM("asm/EnBoom_Draw.s")
}
