extern "C" {
#include "z_en_ma3.hpp"

#define FLAGS 0x00000039

void EnMa3_Init(Actor* actor, GameState* state);
void EnMa3_Destroy(Actor* actor, GameState* state);
void EnMa3_Update(Actor* actor, GameState* state);
void EnMa3_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ma3.data.s")

ActorInit En_Ma3_InitVars = {
    ACTOR_EN_MA3,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MA2,
    sizeof(EnMa3),
    (ActorFunc)EnMa3_Init,
    (ActorFunc)EnMa3_Destroy,
    (ActorFunc)EnMa3_Update,
    (ActorFunc)EnMa3_Draw,
};

GLOBAL_ASM("asm/EnMa3_Init.s")

GLOBAL_ASM("asm/EnMa3_Destroy.s")

GLOBAL_ASM("asm/EnMa3_Update.s")

GLOBAL_ASM("asm/EnMa3_Draw.s")
}
