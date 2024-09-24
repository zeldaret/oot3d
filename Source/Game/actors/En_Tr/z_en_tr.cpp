extern "C" {
#include "z_en_tr.hpp"

#define FLAGS 0x00000010

void EnTr_Init(Actor* actor, GameState* state);
void EnTr_Destroy(Actor* actor, GameState* state);
void EnTr_Update(Actor* actor, GameState* state);
void EnTr_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tr.data.s")

ActorInit En_Tr_InitVars = {
    ACTOR_EN_TR,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TR,
    sizeof(EnTr),
    (ActorFunc)EnTr_Init,
    (ActorFunc)EnTr_Destroy,
    (ActorFunc)EnTr_Update,
    (ActorFunc)EnTr_Draw,
};

GLOBAL_ASM("asm/EnTr_Init.s")

GLOBAL_ASM("asm/EnTr_Destroy.s")

GLOBAL_ASM("asm/EnTr_Update.s")

GLOBAL_ASM("asm/EnTr_Draw.s")
}
