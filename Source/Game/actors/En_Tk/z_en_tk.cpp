extern "C" {
#include "z_en_tk.hpp"

#define FLAGS 0x00000009

void EnTk_Init(Actor* actor, GameState* state);
void EnTk_Destroy(Actor* actor, GameState* state);
void EnTk_Update(Actor* actor, GameState* state);
void EnTk_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tk.data.s")

ActorInit En_Tk_InitVars = {
    ACTOR_EN_TK,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TK,
    sizeof(EnTk),
    (ActorFunc)EnTk_Init,
    (ActorFunc)EnTk_Destroy,
    (ActorFunc)EnTk_Update,
    (ActorFunc)EnTk_Draw,
};

GLOBAL_ASM("asm/EnTk_Init.s")

GLOBAL_ASM("asm/EnTk_Destroy.s")

GLOBAL_ASM("asm/EnTk_Update.s")

GLOBAL_ASM("asm/EnTk_Draw.s")
}
