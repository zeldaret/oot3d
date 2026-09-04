extern "C" {
#include "z_en_firefly.hpp"

#define FLAGS 0x00005005

void EnFirefly_Init(Actor* actor, GameState* state);
void EnFirefly_Destroy(Actor* actor, GameState* state);
void EnFirefly_Update(Actor* actor, GameState* state);
void EnFirefly_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Firefly.data.s")

ActorInit En_Firefly_InitVars = {
    ACTOR_EN_FIREFLY,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_FIREFLY,
    sizeof(EnFirefly),
    (ActorFunc)EnFirefly_Init,
    (ActorFunc)EnFirefly_Destroy,
    (ActorFunc)EnFirefly_Update,
    (ActorFunc)EnFirefly_Draw,
};

GLOBAL_ASM("asm/EnFirefly_Init.s")

GLOBAL_ASM("asm/EnFirefly_Destroy.s")

GLOBAL_ASM("asm/EnFirefly_Update.s")

GLOBAL_ASM("asm/EnFirefly_Draw.s")

GLOBAL_ASM("asm/EnFirefly_Die.s")

GLOBAL_ASM("asm/EnFirefly_DisturbDiveAttack.s")

GLOBAL_ASM("asm/EnFirefly_DiveAttack.s")

GLOBAL_ASM("asm/EnFirefly_DrawInvisible.s")

GLOBAL_ASM("asm/EnFirefly_Fall.s")

GLOBAL_ASM("asm/EnFirefly_FlyAway.s")

GLOBAL_ASM("asm/EnFirefly_FlyIdle.s")

GLOBAL_ASM("asm/EnFirefly_FrozenFall.s")

GLOBAL_ASM("asm/EnFirefly_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnFirefly_Perch.s")

GLOBAL_ASM("asm/EnFirefly_PostLimbDraw.s")

GLOBAL_ASM("asm/EnFirefly_Rebound.s")

GLOBAL_ASM("asm/EnFirefly_SetupFlyIdle.s")

GLOBAL_ASM("asm/EnFirefly_Stunned.s")

}
