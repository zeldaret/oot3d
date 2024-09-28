extern "C" {
#include "z_bg_po_event.hpp"

#define FLAGS 0x00400000

void BgPoEvent_Init(Actor* actor, GameState* state);
void BgPoEvent_Destroy(Actor* actor, GameState* state);
void BgPoEvent_Update(Actor* actor, GameState* state);
void BgPoEvent_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Po_Event.data.s")

ActorInit Bg_Po_Event_InitVars = {
    ACTOR_BG_PO_EVENT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_PO_SISTERS,
    sizeof(BgPoEvent),
    (ActorFunc)BgPoEvent_Init,
    (ActorFunc)BgPoEvent_Destroy,
    (ActorFunc)BgPoEvent_Update,
    (ActorFunc)BgPoEvent_Draw,
};

GLOBAL_ASM("asm/BgPoEvent_Init.s")

GLOBAL_ASM("asm/BgPoEvent_Destroy.s")

GLOBAL_ASM("asm/BgPoEvent_Update.s")

GLOBAL_ASM("asm/BgPoEvent_Draw.s")
}
