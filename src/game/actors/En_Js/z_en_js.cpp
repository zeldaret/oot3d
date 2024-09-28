extern "C" {
#include "z_en_js.hpp"

#define FLAGS 0x00000009

void EnJs_Init(Actor* actor, GameState* state);
void EnJs_Destroy(Actor* actor, GameState* state);
void EnJs_Update(Actor* actor, GameState* state);
void EnJs_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Js.data.s")

ActorInit En_Js_InitVars = {
    ACTOR_EN_JS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_JS,
    sizeof(EnJs),
    (ActorFunc)EnJs_Init,
    (ActorFunc)EnJs_Destroy,
    (ActorFunc)EnJs_Update,
    (ActorFunc)EnJs_Draw,
};

GLOBAL_ASM("asm/EnJs_Init.s")

GLOBAL_ASM("asm/EnJs_Destroy.s")

GLOBAL_ASM("asm/EnJs_Update.s")

GLOBAL_ASM("asm/EnJs_Draw.s")
}
