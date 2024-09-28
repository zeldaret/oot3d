extern "C" {
#include "z_en_attack_niw.hpp"

#define FLAGS 0x00000010

void EnAttackNiw_Init(Actor* actor, GameState* state);
void EnAttackNiw_Destroy(Actor* actor, GameState* state);
void EnAttackNiw_Update(Actor* actor, GameState* state);
void EnAttackNiw_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Attack_Niw.data.s")

ActorInit En_Attack_Niw_InitVars = {
    ACTOR_EN_ATTACK_NIW,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_NIW,
    sizeof(EnAttackNiw),
    (ActorFunc)EnAttackNiw_Init,
    (ActorFunc)EnAttackNiw_Destroy,
    (ActorFunc)EnAttackNiw_Update,
    (ActorFunc)EnAttackNiw_Draw,
};

GLOBAL_ASM("asm/EnAttackNiw_Init.s")

GLOBAL_ASM("asm/EnAttackNiw_Destroy.s")

GLOBAL_ASM("asm/EnAttackNiw_Update.s")

GLOBAL_ASM("asm/EnAttackNiw_Draw.s")
}
