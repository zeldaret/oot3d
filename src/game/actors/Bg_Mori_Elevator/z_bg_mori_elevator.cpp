extern "C" {
#include "z_bg_mori_elevator.hpp"

#define FLAGS 0x80400010

void BgMoriElevator_Init(Actor* actor, GameState* state);
void BgMoriElevator_Destroy(Actor* actor, GameState* state);
void BgMoriElevator_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mori_Elevator.data.s")

ActorInit Bg_Mori_Elevator_InitVars = {
    ACTOR_BG_MORI_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MORI_OBJECTS,
    sizeof(BgMoriElevator),
    (ActorFunc)BgMoriElevator_Init,
    (ActorFunc)BgMoriElevator_Destroy,
    (ActorFunc)BgMoriElevator_Update,
    NULL,
};

GLOBAL_ASM("asm/BgMoriElevator_Init.s")

GLOBAL_ASM("asm/BgMoriElevator_Destroy.s")

GLOBAL_ASM("asm/BgMoriElevator_Update.s")
}
