extern "C" {
#include "z_en_kanban.hpp"

#define FLAGS 0x80000019

void EnKanban_Init(Actor* actor, GameState* state);
void EnKanban_Destroy(Actor* actor, GameState* state);
void EnKanban_Update(Actor* actor, GameState* state);
void EnKanban_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Kanban.data.s")

ActorInit En_Kanban_InitVars = {
    ACTOR_EN_KANBAN,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_KANBAN,
    sizeof(EnKanban),
    (ActorFunc)EnKanban_Init,
    (ActorFunc)EnKanban_Destroy,
    (ActorFunc)EnKanban_Update,
    (ActorFunc)EnKanban_Draw,
};

GLOBAL_ASM("asm/EnKanban_Init.s")

GLOBAL_ASM("asm/EnKanban_Destroy.s")

GLOBAL_ASM("asm/EnKanban_Update.s")

GLOBAL_ASM("asm/EnKanban_Draw.s")
}
