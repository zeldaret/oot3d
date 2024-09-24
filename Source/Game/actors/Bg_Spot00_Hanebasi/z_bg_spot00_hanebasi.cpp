extern "C" {
#include "z_bg_spot00_hanebasi.hpp"

#define FLAGS 0x00400010

void BgSpot00Hanebasi_Init(Actor* actor, GameState* state);
void BgSpot00Hanebasi_Destroy(Actor* actor, GameState* state);
void BgSpot00Hanebasi_Update(Actor* actor, GameState* state);
void BgSpot00Hanebasi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot00_Hanebasi.data.s")

ActorInit Bg_Spot00_Hanebasi_InitVars = {
    ACTOR_BG_SPOT00_HANEBASI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT00_OBJECTS,
    sizeof(BgSpot00Hanebasi),
    (ActorFunc)BgSpot00Hanebasi_Init,
    (ActorFunc)BgSpot00Hanebasi_Destroy,
    (ActorFunc)BgSpot00Hanebasi_Update,
    (ActorFunc)BgSpot00Hanebasi_Draw,
};

GLOBAL_ASM("asm/BgSpot00Hanebasi_Init.s")

GLOBAL_ASM("asm/BgSpot00Hanebasi_Destroy.s")

GLOBAL_ASM("asm/BgSpot00Hanebasi_Update.s")

GLOBAL_ASM("asm/BgSpot00Hanebasi_Draw.s")
}
