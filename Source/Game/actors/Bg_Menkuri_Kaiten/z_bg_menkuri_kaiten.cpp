extern "C" {
#include "z_bg_menkuri_kaiten.hpp"

#define FLAGS 0x80400030

void BgMenkuriKaiten_Init(Actor* actor, GameState* state);
void BgMenkuriKaiten_Destroy(Actor* actor, GameState* state);
void BgMenkuriKaiten_Update(Actor* actor, GameState* state);
void BgMenkuriKaiten_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Menkuri_Kaiten.data.s")

ActorInit Bg_Menkuri_Kaiten_InitVars = {
    ACTOR_BG_MENKURI_KAITEN,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MENKURI_OBJECTS,
    sizeof(BgMenkuriKaiten),
    (ActorFunc)BgMenkuriKaiten_Init,
    (ActorFunc)BgMenkuriKaiten_Destroy,
    (ActorFunc)BgMenkuriKaiten_Update,
    (ActorFunc)BgMenkuriKaiten_Draw,
};

GLOBAL_ASM("asm/BgMenkuriKaiten_Init.s")

GLOBAL_ASM("asm/BgMenkuriKaiten_Destroy.s")

GLOBAL_ASM("asm/BgMenkuriKaiten_Update.s")

GLOBAL_ASM("asm/BgMenkuriKaiten_Draw.s")
}
