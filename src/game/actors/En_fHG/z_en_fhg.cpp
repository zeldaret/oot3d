extern "C" {
#include "z_en_fhg.hpp"

#define FLAGS 0x00000010

void EnfHG_Init(Actor* actor, GameState* state);
void EnfHG_Destroy(Actor* actor, GameState* state);
void EnfHG_Update(Actor* actor, GameState* state);
void EnfHG_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_fHG.data.s")

ActorInit En_fHG_InitVars = {
    ACTOR_EN_FHG,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_FHG,
    sizeof(EnfHG),
    (ActorFunc)EnfHG_Init,
    (ActorFunc)EnfHG_Destroy,
    (ActorFunc)EnfHG_Update,
    (ActorFunc)EnfHG_Draw,
};

GLOBAL_ASM("asm/EnfHG_Init.s")

GLOBAL_ASM("asm/EnfHG_Destroy.s")

GLOBAL_ASM("asm/EnfHG_Update.s")

GLOBAL_ASM("asm/EnfHG_Draw.s")
}
