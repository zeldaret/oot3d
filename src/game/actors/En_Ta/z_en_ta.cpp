extern "C" {
#include "z_en_ta.hpp"

#define FLAGS 0x00000009

void EnTa_Init(Actor* actor, GameState* state);
void EnTa_Destroy(Actor* actor, GameState* state);
void EnTa_Update(Actor* actor, GameState* state);
void EnTa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ta.data.s")

ActorInit En_Ta_InitVars = {
    ACTOR_EN_TA,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TA,
    sizeof(EnTa),
    (ActorFunc)EnTa_Init,
    (ActorFunc)EnTa_Destroy,
    (ActorFunc)EnTa_Update,
    (ActorFunc)EnTa_Draw,
};

GLOBAL_ASM("asm/EnTa_Init.s")

GLOBAL_ASM("asm/EnTa_Destroy.s")

GLOBAL_ASM("asm/EnTa_Update.s")

GLOBAL_ASM("asm/EnTa_Draw.s")
}
