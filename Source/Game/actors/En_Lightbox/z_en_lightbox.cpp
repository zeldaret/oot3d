extern "C" {
#include "z_en_lightbox.hpp"

#define FLAGS 0x80000010

void EnLightbox_Init(Actor* actor, GameState* state);
void EnLightbox_Destroy(Actor* actor, GameState* state);
void EnLightbox_Update(Actor* actor, GameState* state);
void EnLightbox_Draw(Actor* actor, GameState* state);

ActorInit En_Lightbox_InitVars = {
    ACTOR_EN_LIGHTBOX,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_LIGHTBOX,
    sizeof(EnLightbox),
    (ActorFunc)EnLightbox_Init,
    (ActorFunc)EnLightbox_Destroy,
    (ActorFunc)EnLightbox_Update,
    (ActorFunc)EnLightbox_Draw,
};

GLOBAL_ASM("asm/EnLightbox_Init.s")

GLOBAL_ASM("asm/EnLightbox_Destroy.s")

GLOBAL_ASM("asm/EnLightbox_Update.s")

GLOBAL_ASM("asm/EnLightbox_Draw.s")
}
