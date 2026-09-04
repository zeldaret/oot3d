extern "C" {
#include "z_boss_ganon.hpp"

#define FLAGS 0x00000035

void BossGanon_Init(Actor* actor, GameState* state);
void BossGanon_Destroy(Actor* actor, GameState* state);
void BossGanon_Update(Actor* actor, GameState* state);
void BossGanon_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Ganon.data.s")

ActorInit Boss_Ganon_InitVars = {
    ACTOR_BOSS_GANON,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GANON,
    sizeof(BossGanon),
    (ActorFunc)BossGanon_Init,
    (ActorFunc)BossGanon_Destroy,
    (ActorFunc)BossGanon_Update,
    (ActorFunc)BossGanon_Draw,
};

GLOBAL_ASM("asm/BossGanon_Init.s")

GLOBAL_ASM("asm/BossGanon_Destroy.s")

GLOBAL_ASM("asm/BossGanon_Update.s")

GLOBAL_ASM("asm/BossGanon_Draw.s")

GLOBAL_ASM("asm/FUN_0011393c.s")

GLOBAL_ASM("asm/FUN_0016dc98.s")

GLOBAL_ASM("asm/FUN_001938e4.s")

GLOBAL_ASM("asm/FUN_001e1ef8.s")

GLOBAL_ASM("asm/FUN_001fdcb8.s")

GLOBAL_ASM("asm/FUN_0021d6bc.s")

GLOBAL_ASM("asm/FUN_00334914.s")

}
