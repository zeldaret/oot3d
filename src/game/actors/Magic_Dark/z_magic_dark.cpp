extern "C" {
#include "z_magic_dark.hpp"

#define FLAGS 0x02000030

void MagicDark_Init(Actor* actor, GameState* state);
void MagicDark_Destroy(Actor* actor, GameState* state);
void MagicDark_Update(Actor* actor, GameState* state);
void MagicDark_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Magic_Dark.data.s")

ActorInit Magic_Dark_InitVars = {
    ACTOR_MAGIC_DARK,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MagicDark),
    (ActorFunc)MagicDark_Init,
    (ActorFunc)MagicDark_Destroy,
    (ActorFunc)MagicDark_Update,
    (ActorFunc)MagicDark_Draw,
};

GLOBAL_ASM("asm/MagicDark_Init.s")

GLOBAL_ASM("asm/MagicDark_Destroy.s")

GLOBAL_ASM("asm/MagicDark_Update.s")

GLOBAL_ASM("asm/MagicDark_Draw.s")
}
