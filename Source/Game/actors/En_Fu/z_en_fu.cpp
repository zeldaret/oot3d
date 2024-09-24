extern "C" {
#include "z_en_fu.hpp"

#define FLAGS 0x02000019

void EnFu_Init(Actor* actor, GameState* state);
void EnFu_Destroy(Actor* actor, GameState* state);
void EnFu_Update(Actor* actor, GameState* state);
void EnFu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Fu.data.s")

ActorInit En_Fu_InitVars = {
    ACTOR_EN_FU,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_FU,
    sizeof(EnFu),
    (ActorFunc)EnFu_Init,
    (ActorFunc)EnFu_Destroy,
    (ActorFunc)EnFu_Update,
    (ActorFunc)EnFu_Draw,
};

GLOBAL_ASM("asm/EnFu_Init.s")

GLOBAL_ASM("asm/EnFu_Destroy.s")

GLOBAL_ASM("asm/EnFu_Update.s")

GLOBAL_ASM("asm/EnFu_Draw.s")
}
