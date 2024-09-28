extern "C" {
#include "z_en_dns.hpp"

#define FLAGS 0x00000009

void EnDns_Init(Actor* actor, GameState* state);
void EnDns_Destroy(Actor* actor, GameState* state);
void EnDns_Update(Actor* actor, GameState* state);
void EnDns_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dns.data.s")

ActorInit En_Dns_InitVars = {
    ACTOR_EN_DNS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SHOPNUTS,
    sizeof(EnDns),
    (ActorFunc)EnDns_Init,
    (ActorFunc)EnDns_Destroy,
    (ActorFunc)EnDns_Update,
    (ActorFunc)EnDns_Draw,
};

GLOBAL_ASM("asm/EnDns_Init.s")

GLOBAL_ASM("asm/EnDns_Destroy.s")

GLOBAL_ASM("asm/EnDns_Update.s")

GLOBAL_ASM("asm/EnDns_Draw.s")
}
