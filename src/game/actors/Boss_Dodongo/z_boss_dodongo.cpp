extern "C" {
#include "z_boss_dodongo.hpp"

#define FLAGS 0x00000035

void BossDodongo_Init(Actor* actor, GameState* state);
void BossDodongo_Destroy(Actor* actor, GameState* state);
void BossDodongo_Update(Actor* actor, GameState* state);
void BossDodongo_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Dodongo.data_005144C0.s")
GLOBAL_ASM("data/z_Boss_Dodongo.data_005145B4.s")

ActorInit Boss_Dodongo_InitVars = {
    ACTOR_EN_DODONGO,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_KINGDODONGO,
    sizeof(BossDodongo),
    (ActorFunc)BossDodongo_Init,
    (ActorFunc)BossDodongo_Destroy,
    (ActorFunc)BossDodongo_Update,
    (ActorFunc)BossDodongo_Draw,
};

GLOBAL_ASM("asm/BossDodongo_Init.s")

GLOBAL_ASM("asm/BossDodongo_Destroy.s")

GLOBAL_ASM("asm/BossDodongo_Update.s")

GLOBAL_ASM("asm/BossDodongo_Draw.s")
}
