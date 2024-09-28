extern "C" {
#include "z_en_ma2.hpp"

#define FLAGS 0x02000039

void EnMa2_Init(Actor* actor, GameState* state);
void EnMa2_Destroy(Actor* actor, GameState* state);
void EnMa2_Update(Actor* actor, GameState* state);
void EnMa2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ma2.data.s")

ActorInit En_Ma2_InitVars = {
    ACTOR_EN_MA2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_MA2,
    sizeof(EnMa2),
    (ActorFunc)EnMa2_Init,
    (ActorFunc)EnMa2_Destroy,
    (ActorFunc)EnMa2_Update,
    (ActorFunc)EnMa2_Draw,
};

GLOBAL_ASM("asm/EnMa2_Init.s")

GLOBAL_ASM("asm/EnMa2_Destroy.s")

GLOBAL_ASM("asm/EnMa2_Update.s")

GLOBAL_ASM("asm/EnMa2_Draw.s")
}
