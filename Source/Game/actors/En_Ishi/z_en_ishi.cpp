extern "C" {
#include "z_en_ishi.hpp"

#define FLAGS 0x80C00000

void EnIshi_Init(Actor* actor, GameState* state);
void EnIshi_Destroy(Actor* actor, GameState* state);
void EnIshi_Update(Actor* actor, GameState* state);
void EnIshi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ishi.data.s")

ActorInit En_Ishi_InitVars = {
    ACTOR_EN_ISHI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(EnIshi),
    (ActorFunc)EnIshi_Init,
    (ActorFunc)EnIshi_Destroy,
    (ActorFunc)EnIshi_Update,
    (ActorFunc)EnIshi_Draw,
};

GLOBAL_ASM("asm/EnIshi_Init.s")

GLOBAL_ASM("asm/EnIshi_Destroy.s")

GLOBAL_ASM("asm/EnIshi_Update.s")

GLOBAL_ASM("asm/EnIshi_Draw.s")
}
