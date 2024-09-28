extern "C" {
#include "z_boss_ganon2.hpp"

#define FLAGS 0x00000035

void BossGanon2_Init(Actor* actor, GameState* state);
void BossGanon2_Destroy(Actor* actor, GameState* state);
void BossGanon2_Update(Actor* actor, GameState* state);
void BossGanon2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Ganon2.data_0051518C.s")
GLOBAL_ASM("data/z_Boss_Ganon2.data_005152D8.s")

ActorInit Boss_Ganon2_InitVars = {
    ACTOR_BOSS_GANON2,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GANON2,
    sizeof(BossGanon2),
    (ActorFunc)BossGanon2_Init,
    (ActorFunc)BossGanon2_Destroy,
    (ActorFunc)BossGanon2_Update,
    (ActorFunc)BossGanon2_Draw,
};

GLOBAL_ASM("asm/BossGanon2_Init.s")

GLOBAL_ASM("asm/BossGanon2_Destroy.s")

GLOBAL_ASM("asm/BossGanon2_Update.s")

GLOBAL_ASM("asm/BossGanon2_Draw.s")
}
