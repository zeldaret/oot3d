extern "C" {
#include "z_magic_fire.hpp"

#define FLAGS 0x02000010

void MagicFire_Init(Actor* actor, GameState* state);
void MagicFire_Destroy(Actor* actor, GameState* state);
void MagicFire_Update(Actor* actor, GameState* state);
void MagicFire_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Magic_Fire.data.s")

ActorInit Magic_Fire_InitVars = {
    ACTOR_MAGIC_FIRE,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MagicFire),
    (ActorFunc)MagicFire_Init,
    (ActorFunc)MagicFire_Destroy,
    (ActorFunc)MagicFire_Update,
    (ActorFunc)MagicFire_Draw,
};

GLOBAL_ASM("asm/MagicFire_Init.s")

GLOBAL_ASM("asm/MagicFire_Destroy.s")

GLOBAL_ASM("asm/MagicFire_Update.s")

GLOBAL_ASM("asm/MagicFire_Draw.s")
}
