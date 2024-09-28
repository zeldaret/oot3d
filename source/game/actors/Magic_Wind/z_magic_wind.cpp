extern "C" {
#include "z_magic_wind.hpp"

#define FLAGS 0x02000010

void MagicWind_Init(Actor* actor, GameState* state);
void MagicWind_Destroy(Actor* actor, GameState* state);
void MagicWind_Update(Actor* actor, GameState* state);
void MagicWind_Draw(Actor* actor, GameState* state);

ActorInit Magic_Wind_InitVars = {
    ACTOR_MAGIC_WIND,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MagicWind),
    (ActorFunc)MagicWind_Init,
    (ActorFunc)MagicWind_Destroy,
    (ActorFunc)MagicWind_Update,
    (ActorFunc)MagicWind_Draw,
};

GLOBAL_ASM("asm/MagicWind_Init.s")

GLOBAL_ASM("asm/MagicWind_Destroy.s")

GLOBAL_ASM("asm/MagicWind_Update.s")

GLOBAL_ASM("asm/MagicWind_Draw.s")
}
