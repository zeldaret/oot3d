extern "C" {
#include "z_bg_bombwall.hpp"

#define FLAGS 0x80400000

void BgBombwall_Init(Actor* actor, GameState* state);
void BgBombwall_Destroy(Actor* actor, GameState* state);
void BgBombwall_Update(Actor* actor, GameState* state);
void BgBombwall_Draw(Actor* actor, GameState* state);

ActorInit Bg_Bombwall_InitVars = {
    ACTOR_BG_BOMBWALL,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(BgBombwall),
    (ActorFunc)BgBombwall_Init,
    (ActorFunc)BgBombwall_Destroy,
    (ActorFunc)BgBombwall_Update,
    (ActorFunc)BgBombwall_Draw,
};

GLOBAL_ASM("asm/BgBombwall_Init.s")

GLOBAL_ASM("asm/BgBombwall_Destroy.s")

GLOBAL_ASM("asm/BgBombwall_Update.s")

GLOBAL_ASM("asm/BgBombwall_Draw.s")
}
