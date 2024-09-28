extern "C" {
#include "z_bg_jya_bombiwa.hpp"

#define FLAGS 0x80400000

void BgJyaBombiwa_Init(Actor* actor, GameState* state);
void BgJyaBombiwa_Destroy(Actor* actor, GameState* state);
void BgJyaBombiwa_Update(Actor* actor, GameState* state);
void BgJyaBombiwa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Bombiwa.data.s")

ActorInit Bg_Jya_Bombiwa_InitVars = {
    ACTOR_BG_JYA_BOMBIWA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaBombiwa),
    (ActorFunc)BgJyaBombiwa_Init,
    (ActorFunc)BgJyaBombiwa_Destroy,
    (ActorFunc)BgJyaBombiwa_Update,
    (ActorFunc)BgJyaBombiwa_Draw,
};

GLOBAL_ASM("asm/BgJyaBombiwa_Init.s")

GLOBAL_ASM("asm/BgJyaBombiwa_Destroy.s")

GLOBAL_ASM("asm/BgJyaBombiwa_Update.s")

GLOBAL_ASM("asm/BgJyaBombiwa_Draw.s")
}
