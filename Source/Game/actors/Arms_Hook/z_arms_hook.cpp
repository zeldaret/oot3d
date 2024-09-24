extern "C" {
#include "z_arms_hook.hpp"

#define FLAGS 0x00000030

void ArmsHook_Init(Actor* actor, GameState* state);
void ArmsHook_Destroy(Actor* actor, GameState* state);
void ArmsHook_Update(Actor* actor, GameState* state);
void ArmsHook_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Arms_Hook.data.s")

ActorInit Arms_Hook_InitVars = {
    ACTOR_ARMS_HOOK,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_LINK_BOY,
    sizeof(ArmsHook),
    (ActorFunc)ArmsHook_Init,
    (ActorFunc)ArmsHook_Destroy,
    (ActorFunc)ArmsHook_Update,
    (ActorFunc)ArmsHook_Draw,
};

GLOBAL_ASM("asm/ArmsHook_Init.s")

GLOBAL_ASM("asm/ArmsHook_Destroy.s")

GLOBAL_ASM("asm/ArmsHook_Update.s")

GLOBAL_ASM("asm/ArmsHook_Draw.s")
}
