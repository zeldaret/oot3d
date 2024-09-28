extern "C" {
#include "z_bg_haka_huta.hpp"

#define FLAGS 0x80000010

void BgHakaHuta_Init(Actor* actor, GameState* state);
void BgHakaHuta_Destroy(Actor* actor, GameState* state);
void BgHakaHuta_Update(Actor* actor, GameState* state);
void BgHakaHuta_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Haka_Huta.data.s")

ActorInit Bg_Haka_Huta_InitVars = {
    ACTOR_BG_HAKA_HUTA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HAKACH_OBJECTS,
    sizeof(BgHakaHuta),
    (ActorFunc)BgHakaHuta_Init,
    (ActorFunc)BgHakaHuta_Destroy,
    (ActorFunc)BgHakaHuta_Update,
    (ActorFunc)BgHakaHuta_Draw,
};

GLOBAL_ASM("asm/BgHakaHuta_Init.s")

GLOBAL_ASM("asm/BgHakaHuta_Destroy.s")

GLOBAL_ASM("asm/BgHakaHuta_Update.s")

GLOBAL_ASM("asm/BgHakaHuta_Draw.s")
}
