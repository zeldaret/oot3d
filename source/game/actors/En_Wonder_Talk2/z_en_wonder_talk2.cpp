extern "C" {
#include "z_en_wonder_talk2.hpp"

#define FLAGS 0x08000009

void EnWonderTalk2_Init(Actor* actor, GameState* state);
void EnWonderTalk2_Destroy(Actor* actor, GameState* state);
void EnWonderTalk2_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Wonder_Talk2.data.s")

ActorInit En_Wonder_Talk2_InitVars = {
    ACTOR_EN_WONDER_TALK2,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnWonderTalk2),
    (ActorFunc)EnWonderTalk2_Init,
    (ActorFunc)EnWonderTalk2_Destroy,
    (ActorFunc)EnWonderTalk2_Update,
    NULL,
};

GLOBAL_ASM("asm/EnWonderTalk2_Init.s")

GLOBAL_ASM("asm/EnWonderTalk2_Destroy.s")

GLOBAL_ASM("asm/EnWonderTalk2_Update.s")
}
