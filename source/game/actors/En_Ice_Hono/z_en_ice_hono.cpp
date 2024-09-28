extern "C" {
#include "z_en_ice_hono.hpp"

#define FLAGS 0x00000000

void EnIceHono_Init(Actor* actor, GameState* state);
void EnIceHono_Destroy(Actor* actor, GameState* state);
void EnIceHono_Update(Actor* actor, GameState* state);
void EnIceHono_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ice_Hono.data.s")

ActorInit En_Ice_Hono_InitVars = {
    ACTOR_EN_ICE_HONO,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnIceHono),
    (ActorFunc)EnIceHono_Init,
    (ActorFunc)EnIceHono_Destroy,
    (ActorFunc)EnIceHono_Update,
    (ActorFunc)EnIceHono_Draw,
};

GLOBAL_ASM("asm/EnIceHono_Init.s")

GLOBAL_ASM("asm/EnIceHono_Destroy.s")

GLOBAL_ASM("asm/EnIceHono_Update.s")

GLOBAL_ASM("asm/EnIceHono_Draw.s")
}
