extern "C" {
#include "z_en_ani.hpp"

#define FLAGS 0x00000009

void EnAni_Init(Actor* actor, GameState* state);
void EnAni_Destroy(Actor* actor, GameState* state);
void EnAni_Update(Actor* actor, GameState* state);
void EnAni_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ani.data.s")

ActorInit En_Ani_InitVars = {
    ACTOR_EN_ANI,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ANI,
    sizeof(EnAni),
    (ActorFunc)EnAni_Init,
    (ActorFunc)EnAni_Destroy,
    (ActorFunc)EnAni_Update,
    (ActorFunc)EnAni_Draw,
};

GLOBAL_ASM("asm/EnAni_Init.s")

GLOBAL_ASM("asm/EnAni_Destroy.s")

GLOBAL_ASM("asm/EnAni_Update.s")

GLOBAL_ASM("asm/EnAni_Draw.s")
}
