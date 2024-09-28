extern "C" {
#include "z_bg_jya_cobra.hpp"

#define FLAGS 0x80400010

void BgJyaCobra_Init(Actor* actor, GameState* state);
void BgJyaCobra_Destroy(Actor* actor, GameState* state);
void BgJyaCobra_Update(Actor* actor, GameState* state);
void BgJyaCobra_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Cobra.data.s")

ActorInit Bg_Jya_Cobra_InitVars = {
    ACTOR_BG_JYA_COBRA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaCobra),
    (ActorFunc)BgJyaCobra_Init,
    (ActorFunc)BgJyaCobra_Destroy,
    (ActorFunc)BgJyaCobra_Update,
    (ActorFunc)BgJyaCobra_Draw,
};

GLOBAL_ASM("asm/BgJyaCobra_Init.s")

GLOBAL_ASM("asm/BgJyaCobra_Destroy.s")

GLOBAL_ASM("asm/BgJyaCobra_Update.s")

GLOBAL_ASM("asm/BgJyaCobra_Draw.s")
}
