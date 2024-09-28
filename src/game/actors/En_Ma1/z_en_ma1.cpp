extern "C" {
#include "z_en_ma1.hpp"

#define FLAGS 0x02000039

void EnMa1_Init(Actor* actor, GameState* state);
void EnMa1_Destroy(Actor* actor, GameState* state);
void EnMa1_Update(Actor* actor, GameState* state);
void EnMa1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ma1.data.s")

ActorInit En_Ma1_InitVars = {
    ACTOR_EN_MA1,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MA1,
    sizeof(EnMa1),
    (ActorFunc)EnMa1_Init,
    (ActorFunc)EnMa1_Destroy,
    (ActorFunc)EnMa1_Update,
    (ActorFunc)EnMa1_Draw,
};

GLOBAL_ASM("asm/EnMa1_Init.s")

GLOBAL_ASM("asm/EnMa1_Destroy.s")

GLOBAL_ASM("asm/EnMa1_Update.s")

GLOBAL_ASM("asm/EnMa1_Draw.s")
}
