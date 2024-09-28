extern "C" {
#include "z_en_trap.hpp"

#define FLAGS 0x00000010

void EnTrap_Init(Actor* actor, GameState* state);
void EnTrap_Destroy(Actor* actor, GameState* state);
void EnTrap_Update(Actor* actor, GameState* state);
void EnTrap_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Trap.data.s")

ActorInit En_Trap_InitVars = {
    ACTOR_EN_TRAP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_TRAP,
    sizeof(EnTrap),
    (ActorFunc)EnTrap_Init,
    (ActorFunc)EnTrap_Destroy,
    (ActorFunc)EnTrap_Update,
    (ActorFunc)EnTrap_Draw,
};

GLOBAL_ASM("asm/EnTrap_Init.s")

GLOBAL_ASM("asm/EnTrap_Destroy.s")

GLOBAL_ASM("asm/EnTrap_Update.s")

GLOBAL_ASM("asm/EnTrap_Draw.s")
}
