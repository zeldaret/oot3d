extern "C" {
#include "z_bg_jya_lift.hpp"

#define FLAGS 0x80400010

void BgJyaLift_Init(Actor* actor, GameState* state);
void BgJyaLift_Destroy(Actor* actor, GameState* state);
void BgJyaLift_Update(Actor* actor, GameState* state);
void BgJyaLift_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Lift.data.s")

ActorInit Bg_Jya_Lift_InitVars = {
    ACTOR_BG_JYA_LIFT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaLift),
    (ActorFunc)BgJyaLift_Init,
    (ActorFunc)BgJyaLift_Destroy,
    (ActorFunc)BgJyaLift_Update,
    (ActorFunc)BgJyaLift_Draw,
};

GLOBAL_ASM("asm/BgJyaLift_Init.s")

GLOBAL_ASM("asm/BgJyaLift_Destroy.s")

GLOBAL_ASM("asm/BgJyaLift_Update.s")

GLOBAL_ASM("asm/BgJyaLift_Draw.s")
}
