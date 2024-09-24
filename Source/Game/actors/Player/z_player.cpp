extern "C" {
#include "global.hpp"
#define FLAGS 0x06000035

void Player_Init(Actor* actor, GameState* state);
void Player_Destroy(Actor* actor, GameState* state);
void Player_Update(Actor* actor, GameState* state);
void Player_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Player.data_00539FB0.s")
GLOBAL_ASM("data/z_Player.data_0053C924.s")

ActorInit Player_InitVars = {
    ACTOR_PLAYER,
    ACTORCAT_PLAYER,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(Player),
    (ActorFunc)Player_Init,
    (ActorFunc)Player_Destroy,
    (ActorFunc)Player_Update,
    (ActorFunc)Player_Draw,
};

GLOBAL_ASM("asm/Player_Init.s")

GLOBAL_ASM("asm/Player_Destroy.s")

GLOBAL_ASM("asm/Player_Update.s")

GLOBAL_ASM("asm/Player_Draw.s")
}
