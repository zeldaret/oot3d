extern "C" {
#include "z_en_light.hpp"

#define FLAGS 0x00000000

void EnLight_Init(Actor* actor, GameState* state);
void EnLight_Destroy(Actor* actor, GameState* state);
void EnLight_Update(Actor* actor, GameState* state);
void EnLight_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Light.data.s")

ActorInit En_Light_InitVars = {
    ACTOR_EN_LIGHT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnLight),
    (ActorFunc)EnLight_Init,
    (ActorFunc)EnLight_Destroy,
    (ActorFunc)EnLight_Update,
    (ActorFunc)EnLight_Draw,
};

GLOBAL_ASM("asm/EnLight_Init.s")

GLOBAL_ASM("asm/EnLight_Destroy.s")

GLOBAL_ASM("asm/EnLight_Update.s")

GLOBAL_ASM("asm/EnLight_Draw.s")
}
