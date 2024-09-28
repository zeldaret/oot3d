extern "C" {
#include "z_en_torch2.hpp"

#define FLAGS 0x00000035

void EnTorch2_Init(Actor* actor, GameState* state);
void EnTorch2_Destroy(Actor* actor, GameState* state);
void EnTorch2_Update(Actor* actor, GameState* state);
void EnTorch2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Torch2.data.s")

ActorInit En_Torch2_InitVars = {
    ACTOR_EN_TORCH2,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_TORCH2,
    sizeof(EnTorch2),
    (ActorFunc)EnTorch2_Init,
    (ActorFunc)EnTorch2_Destroy,
    (ActorFunc)EnTorch2_Update,
    (ActorFunc)EnTorch2_Draw,
};

GLOBAL_ASM("asm/EnTorch2_Init.s")

GLOBAL_ASM("asm/EnTorch2_Destroy.s")

GLOBAL_ASM("asm/EnTorch2_Update.s")

GLOBAL_ASM("asm/EnTorch2_Draw.s")
}
