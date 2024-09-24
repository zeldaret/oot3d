extern "C" {
#include "z_bg_jya_haheniron.hpp"

#define FLAGS 0x80400010

void BgJyaHaheniron_Init(Actor* actor, GameState* state);
void BgJyaHaheniron_Destroy(Actor* actor, GameState* state);
void BgJyaHaheniron_Update(Actor* actor, GameState* state);
void BgJyaHaheniron_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Haheniron.data_005128D8.s")
GLOBAL_ASM("data/z_Bg_Jya_Haheniron.data_00512948.s")

ActorInit Bg_Jya_Haheniron_InitVars = {
    ACTOR_BG_JYA_HAHENIRON,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_JYA_IRON,
    sizeof(BgJyaHaheniron),
    (ActorFunc)BgJyaHaheniron_Init,
    (ActorFunc)BgJyaHaheniron_Destroy,
    (ActorFunc)BgJyaHaheniron_Update,
    (ActorFunc)BgJyaHaheniron_Draw,
};

GLOBAL_ASM("asm/BgJyaHaheniron_Init.s")

GLOBAL_ASM("asm/BgJyaHaheniron_Destroy.s")

GLOBAL_ASM("asm/BgJyaHaheniron_Update.s")

GLOBAL_ASM("asm/BgJyaHaheniron_Draw.s")
}
