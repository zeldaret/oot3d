extern "C" {
#include "z_bg_gnd_iceblock.hpp"

#define FLAGS 0x80400030

void BgGndIceblock_Init(Actor* actor, GameState* state);
void BgGndIceblock_Destroy(Actor* actor, GameState* state);
void BgGndIceblock_Update(Actor* actor, GameState* state);
void BgGndIceblock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Gnd_Iceblock.data.s")

ActorInit Bg_Gnd_Iceblock_InitVars = {
    ACTOR_BG_GND_ICEBLOCK,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(BgGndIceblock),
    (ActorFunc)BgGndIceblock_Init,
    (ActorFunc)BgGndIceblock_Destroy,
    (ActorFunc)BgGndIceblock_Update,
    (ActorFunc)BgGndIceblock_Draw,
};

GLOBAL_ASM("asm/BgGndIceblock_Init.s")

GLOBAL_ASM("asm/BgGndIceblock_Destroy.s")

GLOBAL_ASM("asm/BgGndIceblock_Update.s")

GLOBAL_ASM("asm/BgGndIceblock_Draw.s")

GLOBAL_ASM("asm/BgGndIceblock_Fall.s")

GLOBAL_ASM("asm/BgGndIceblock_Hole.s")

GLOBAL_ASM("asm/BgGndIceblock_Idle.s")

GLOBAL_ASM("asm/BgGndIceblock_Reset.s")

GLOBAL_ASM("asm/BgGndIceblock_SetPosition.s")

GLOBAL_ASM("asm/BgGndIceblock_Slide.s")

}
