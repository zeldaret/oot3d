extern "C" {
#include "z_arrow_fire.hpp"

#define FLAGS 0x02000010

void ArrowFire_Init(Actor* actor, GameState* state);
void ArrowFire_Destroy(Actor* actor, GameState* state);
void ArrowFire_Update(Actor* actor, GameState* state);
void ArrowFire_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Arrow_Fire.data.s")

ActorInit Arrow_Fire_InitVars = {
    ACTOR_ARROW_FIRE,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ArrowFire),
    (ActorFunc)ArrowFire_Init,
    (ActorFunc)ArrowFire_Destroy,
    (ActorFunc)ArrowFire_Update,
    (ActorFunc)ArrowFire_Draw,
};

GLOBAL_ASM("asm/ArrowFire_Init.s")

GLOBAL_ASM("asm/ArrowFire_Destroy.s")

GLOBAL_ASM("asm/ArrowFire_Update.s")

GLOBAL_ASM("asm/ArrowFire_Draw.s")
}
