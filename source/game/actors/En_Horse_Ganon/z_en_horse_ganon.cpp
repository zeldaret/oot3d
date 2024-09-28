extern "C" {
#include "z_en_horse_ganon.hpp"

#define FLAGS 0x00000010

void EnHorseGanon_Init(Actor* actor, GameState* state);
void EnHorseGanon_Destroy(Actor* actor, GameState* state);
void EnHorseGanon_Update(Actor* actor, GameState* state);
void EnHorseGanon_Draw(Actor* actor, GameState* state);

ActorInit En_Horse_Ganon_InitVars = {
    ACTOR_EN_HORSE_GANON,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HORSE_GANON,
    sizeof(EnHorseGanon),
    (ActorFunc)EnHorseGanon_Init,
    (ActorFunc)EnHorseGanon_Destroy,
    (ActorFunc)EnHorseGanon_Update,
    (ActorFunc)EnHorseGanon_Draw,
};

GLOBAL_ASM("asm/EnHorseGanon_Init.s")

GLOBAL_ASM("asm/EnHorseGanon_Destroy.s")

GLOBAL_ASM("asm/EnHorseGanon_Update.s")

GLOBAL_ASM("asm/EnHorseGanon_Draw.s")
}
