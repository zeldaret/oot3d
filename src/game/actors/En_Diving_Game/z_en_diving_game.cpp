extern "C" {
#include "z_en_diving_game.hpp"

#define FLAGS 0x00000019

void EnDivingGame_Init(Actor* actor, GameState* state);
void EnDivingGame_Destroy(Actor* actor, GameState* state);
void EnDivingGame_Update(Actor* actor, GameState* state);
void EnDivingGame_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Diving_Game.data.s")

ActorInit En_Diving_Game_InitVars = {
    ACTOR_EN_DIVING_GAME,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZO,
    sizeof(EnDivingGame),
    (ActorFunc)EnDivingGame_Init,
    (ActorFunc)EnDivingGame_Destroy,
    (ActorFunc)EnDivingGame_Update,
    (ActorFunc)EnDivingGame_Draw,
};

GLOBAL_ASM("asm/EnDivingGame_Init.s")

GLOBAL_ASM("asm/EnDivingGame_Destroy.s")

GLOBAL_ASM("asm/EnDivingGame_Update.s")

GLOBAL_ASM("asm/EnDivingGame_Draw.s")
}
