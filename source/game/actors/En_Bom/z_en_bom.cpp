extern "C" {
#include "z_en_bom.hpp"

#define FLAGS 0x00000030

void EnBom_Init(Actor* actor, GameState* state);
void EnBom_Destroy(Actor* actor, GameState* state);
void EnBom_Update(Actor* actor, GameState* state);
void EnBom_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bom.data.s")

ActorInit En_Bom_InitVars = {
    ACTOR_EN_BOM,
    ACTORCAT_EXPLOSIVES,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnBom),
    (ActorFunc)EnBom_Init,
    (ActorFunc)EnBom_Destroy,
    (ActorFunc)EnBom_Update,
    (ActorFunc)EnBom_Draw,
};

GLOBAL_ASM("asm/EnBom_Init.s")

GLOBAL_ASM("asm/EnBom_Destroy.s")

GLOBAL_ASM("asm/EnBom_Update.s")

GLOBAL_ASM("asm/EnBom_Draw.s")
}
