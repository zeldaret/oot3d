extern "C" {
#include "z_en_anubice_tag.hpp"

#define FLAGS 0x00000010

void EnAnubiceTag_Init(Actor* actor, GameState* state);
void EnAnubiceTag_Destroy(Actor* actor, GameState* state);
void EnAnubiceTag_Update(Actor* actor, GameState* state);
void EnAnubiceTag_Draw(Actor* actor, GameState* state);

ActorInit En_Anubice_Tag_InitVars = {
    ACTOR_EN_ANUBICE_TAG,
    ACTORCAT_SWITCH,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnAnubiceTag),
    (ActorFunc)EnAnubiceTag_Init,
    (ActorFunc)EnAnubiceTag_Destroy,
    (ActorFunc)EnAnubiceTag_Update,
    (ActorFunc)EnAnubiceTag_Draw,
};

GLOBAL_ASM("asm/EnAnubiceTag_Init.s")

GLOBAL_ASM("asm/EnAnubiceTag_Destroy.s")

GLOBAL_ASM("asm/EnAnubiceTag_Update.s")

GLOBAL_ASM("asm/EnAnubiceTag_Draw.s")
}
