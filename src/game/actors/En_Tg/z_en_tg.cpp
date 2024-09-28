extern "C" {
#include "z_en_tg.hpp"

#define FLAGS 0x00000009

void EnTg_Init(Actor* actor, GameState* state);
void EnTg_Destroy(Actor* actor, GameState* state);
void EnTg_Update(Actor* actor, GameState* state);
void EnTg_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tg.data.s")

ActorInit En_Tg_InitVars = {
    ACTOR_EN_TG,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MU,
    sizeof(EnTg),
    (ActorFunc)EnTg_Init,
    (ActorFunc)EnTg_Destroy,
    (ActorFunc)EnTg_Update,
    (ActorFunc)EnTg_Draw,
};

GLOBAL_ASM("asm/EnTg_Init.s")

GLOBAL_ASM("asm/EnTg_Destroy.s")

GLOBAL_ASM("asm/EnTg_Update.s")

GLOBAL_ASM("asm/EnTg_Draw.s")
}
