extern "C" {
#include "global.hpp"

void FUN_0035af04(Player* player, s32 arg1) {
    if (arg1 == 1) {
        player->unk_29B8 |= 0x200;
    } else {
        player->unk_29B8 &= ~0x200;
    }
}

void Actor_Kill(Actor* actor) {
    actor->draw = 0;
    actor->update = 0;
    actor->flags &= ~0x1;
}

Actor* Actor_SpawnAsChild(ActorContext* actorCtx, Actor* parent, PlayState* play, s16 actorId, f32 posX,
                          f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, s16 params) {
    Actor* actor = Actor_Spawn(actorCtx, play, actorId, posX, posY, posZ, rotX, rotY, rotZ, params, 1);
    if (actor != NULL) {
        parent->child = actor;
        actor->parent = parent;
        if (actor->room >= 0) {
            actor->room = parent->room;
        }
    }
    return actor;
}

/**
 * Finds the first actor instance of a specified ID and category if there is one.
 */
Actor* Actor_Find(ActorContext* actorCtx, s32 actorId, s32 actorCategory) {
    Actor* actor = actorCtx->actorLists[actorCategory].head;

    while (actor != NULL) {
        if (actorId == actor->id) {
            return actor;
        }
        actor = actor->next;
    }

    return NULL;
}

/**
 * Finds the first actor instance of a specified ID and category within a given range from
 * an actor if there is one. If the ID provided is -1, this will look for any actor of the
 * specified category rather than a specific ID.
 */
Actor* Actor_FindNearby(PlayState* play, Actor* refActor, s16 actorId, u8 actorCategory, f32 range) {
    Actor* actor = play->actorCtx.actorLists[actorCategory].head;

    while (actor != NULL) {
        if (actor == refActor || ((actorId != -1) && (actorId != actor->id))) {
            actor = actor->next;
        } else {
            if (Actor_WorldDistXYZToActor(refActor, actor) <= range) {
                return actor;
            } else {
                actor = actor->next;
            }
        }
    }

    return NULL;
}

PosRot Actor_GetWorldPosShapeRot(Actor* actor) {
    PosRot tmp;

    Math_Vec3f_Copy(&tmp.pos, &actor->world.pos);
    tmp.rot = actor->shape.rot;

    return tmp;
}

s32 Actor_HasParent(Actor* actor, PlayState* /*play*/) {
    return actor->parent != NULL;
}

s32 Actor_HasNoParent(Actor* actor, PlayState* play) {
    return Actor_HasParent(actor, play) == 0;
}

/**
 * Check if the specified actor is facing the player and is nearby.
 * The maximum angle difference that qualifies as "facing" is specified by `maxAngle`.
 * The minimum distance that qualifies as "nearby" is specified by `range`.
 */
s32 Actor_IsFacingAndNearPlayer(Actor* actor, f32 range, s16 maxAngle) {
    const s16 yawDiff = actor->yawTowardsPlayer - actor->shape.rot.y;

    if (ABS(yawDiff) < maxAngle) {
        const f32 xyzDistanceFromLink = sqrtf(SQ(actor->xzDistToPlayer) + SQ(actor->yDistToPlayer));

        if (xyzDistanceFromLink < range) {
            return true;
        }
    }

    return false;
}

s32 Actor_IsMounted(PlayState* /*play*/, Actor* horse) {
    return horse->child != NULL;
}

s32 Actor_NotMounted(PlayState* play, Actor* actor) {
    return Actor_IsMounted(play, actor) == 0;
}

s32 Actor_SetRideActor(PlayState* play, Actor* horse, s32 mountSide) {
    Player* player = GET_PLAYER(play);

    if ((player->stateFlags1 & 0x003C7880) == 0) {
        player->rideActor = horse;
        player->mountSide = mountSide;
        return true;
    }

    return false;
}

void Actor_SetScale(Actor* actor, f32 scale) {
    actor->scale.z = scale;
    actor->scale.y = scale;
    actor->scale.x = scale;
}

void Actor_SetFocus(Actor* actor, f32 yOffset) {
    actor->focus.pos.x = actor->world.pos.x;
    actor->focus.pos.y = actor->world.pos.y + yOffset;
    actor->focus.pos.z = actor->world.pos.z;
    actor->focus.rot = actor->world.rot;
}

void Actor_ChangeType(PlayState* play, ActorContext* actorCtx, Actor* actor, s32 newType) {
    actorCtx->total--;
    actorCtx->actorLists[actor->category].length--;
    if (actor->prev != NULL) {
        actor->prev->next = actor->next;
    } else {
        actorCtx->actorLists[actor->category].head = actor->next;
    }

    if (actor->next != NULL) {
        actor->next->prev = actor->prev;
    }
    actor->next = NULL;
    actor->prev = NULL;

    s8 room = play->roomCtx.unk_00[0];
    if ((actor->room == room) && (actor->category == ACTORCAT_ENEMY) &&
        (actorCtx->actorLists[ACTORCAT_ENEMY].length == 0)) {
        play->actorCtx.flags.tempClear |= 1 << room;
    }

    actor->category = newType;
    actorCtx->total++;
    actorCtx->actorLists[newType].length++;

    Actor* head;
    if ((head = actorCtx->actorLists[newType].head) != NULL) {
        head->prev = actor;
    }
    actorCtx->actorLists[newType].head = actor;
    actor->next = head;
}

void Actor_MoveForward(Actor* actor) {
    f32 temp;

    actor->velocity.x = Math_SinS(actor->world.rot.y) * actor->speed;
    actor->velocity.z = Math_CosS(actor->world.rot.y) * actor->speed;

    {
        f32 scale = (f32)SREG(30) * (1.0f / 3.0f);
        actor->velocity.y += actor->gravity * scale;
    }
    if (actor->velocity.y < actor->minVelocityY) {
        actor->velocity.y = actor->minVelocityY;
    }

    temp = (f32)SREG(30) * 0.5f;
    actor->world.pos.x += actor->colChkInfo.displacement.x + actor->velocity.x * temp;
    actor->world.pos.y += actor->colChkInfo.displacement.y + actor->velocity.y * temp;
    actor->world.pos.z += actor->colChkInfo.displacement.z + actor->velocity.z * temp;
}

f32 Actor_WorldDistXYZToActor(Actor* actorA, Actor* actorB) {
    return Math_Vec3f_DistXYZ(&actorA->world.pos, &actorB->world.pos);
}

f32 Actor_WorldDistXYZToPoint(Actor* actor, Vec3f* point) {
    return Math_Vec3f_DistXYZ(&actor->world.pos, point);
}

f32 Actor_WorldDistXZToActor(Actor* actorA, Actor* actorB) {
    return Math_Vec3f_DistXZ(&actorA->world.pos, &actorB->world.pos);
}

f32 Actor_WorldDistXZToPoint(Actor* actor, Vec3f* point) {
    return Math_Vec3f_DistXZ(&actor->world.pos, point);
}

u8 Actor_ApplyDamage(Actor* actor) {
    if (actor->colChkInfo.health <= actor->colChkInfo.damage) {
        actor->colChkInfo.health = 0;
    } else {
        actor->colChkInfo.health -= actor->colChkInfo.damage;
    }

    return actor->colChkInfo.health;
}

Actor* Actor_GetCollidedExplosive(PlayState* /*play*/, Collider* collider) {
    if (collider->acFlags & AC_HIT) {
        Actor* actor = collider->ac;
        if (actor->category == ACTORCAT_EXPLOSIVES) {
            collider->acFlags &= ~AC_HIT;
            return actor;
        }
    }
    return NULL;
}

s32 Actor_IsFacingPlayer(Actor* actor, s16 angle) {
    s16 yawDiff = actor->yawTowardsPlayer - actor->shape.rot.y;
    return ABS(yawDiff) < angle;
}

u32 Actor_ProcessTalkRequest(Actor* actor, PlayState* play) {
    u32 result;

    if (actor->flags & 0x100) {
        actor->flags &= ~0x100;
        result = 1;
    } else {
        result = 0;
    }

    return result;
}

void Actor_Noop(Actor* actor, GameState* state) {
}

s16 Actor_WorldYawTowardPoint(Actor* actor, Vec3f* point) {
    return Math_Vec3f_Yaw(&actor->world.pos, point);
}

s16 Actor_WorldYawTowardActor(Actor* actor, Actor* other) {
    return Math_Vec3f_Yaw(&actor->world.pos, &other->world.pos);
}

void ActorShape_Init(ActorShape* shape, f32 yOffset, ActorShadowFunc shadowDraw, f32 shadowScale) {
    shape->yOffset = yOffset;
    shape->shadowDraw = shadowDraw;
    shape->shadowScale = shadowScale;
    shape->shadowAlpha = 255;
}

extern void ActorShadow_Draw(Actor* actor, Lights* lights, PlayState* play, s32 arg3, Color_RGBA8* color);

void ActorShadow_DrawCircle(Actor* actor, Lights* lights, PlayState* play) {
    ActorShadow_Draw(actor, lights, play, 0, NULL);
}

void ActorShadow_DrawWhiteCircle(Actor* actor, Lights* lights, PlayState* play) {
    // static Color_RGBA8 white = { 255, 255, 255, 255 };

    // ActorShadow_Draw(actor, lights, play, 0, &white);
    ActorShadow_Draw(actor, lights, play, 0, &gWhiteColor);
}

void ActorShadow_DrawHorse(Actor* actor, Lights* lights, PlayState* play) {
    ActorShadow_Draw(actor, lights, play, 1, NULL);
}

// void ActorShadow_DrawFoot(PlayState* play, Light* light, MtxF* arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6);

// void ActorShadow_DrawFeet(Actor* actor, Lights* lights, PlayState* play);

// void Actor_SetFeetPos(Actor* actor, s32 limbIndex, s32 leftFootIndex, Vec3f* leftFootPos, s32 rightFootIndex,
                    //   Vec3f* rightFootPos);

// void Math_GetProjectionPos(PlayState* play, Vec3f* src, Vec3f* xyzDest, f32* wDest);

// target stuff

s32 Flags_GetEnv(PlayState* play, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = 1 << bit;

    return play->envFlags[index] & mask;
}

void Flags_SetEnv(PlayState* play, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = 1 << bit;

    play->envFlags[index] |= mask;
}


void Flags_UnsetEnv(PlayState* play, s16 flag) {
    s16 index = flag / 16;
    s16 bit = flag % 16;
    s16 mask = (1 << bit) ^ 0xFFFF;

    play->envFlags[index] &= mask;
}

/**
 * Tests if current scene switch flag is set.
 */
s32 Flags_GetSwitch(PlayState* play, s32 flag) {
    if (flag < 0x20) {
        return play->actorCtx.flags.swch & (1 << flag);
    } else {
        return play->actorCtx.flags.tempSwch & (1 << (flag - 0x20));
    }
}

/**
 * Sets current scene switch flag.
 */
void Flags_SetSwitch(PlayState* play, s32 flag) {
    if (flag < 0x20) {
        play->actorCtx.flags.swch |= (1 << flag);
    } else {
        play->actorCtx.flags.tempSwch |= (1 << (flag - 0x20));
    }
}

/**
 * Unsets current scene switch flag.
 */
void Flags_UnsetSwitch(PlayState* play, s32 flag) {
    if (flag < 0x20) {
        play->actorCtx.flags.swch &= ~(1 << flag);
    } else {
        play->actorCtx.flags.tempSwch &= ~(1 << (flag - 0x20));
    }
}

/**
 * Tests if current scene chest flag is set.
 */
s32 Flags_GetTreasure(PlayState* play, s32 flag) {
    return play->actorCtx.flags.chest & (1 << flag);
}

/**
 * Sets current scene chest flag.
 */
void Flags_SetTreasure(PlayState* play, s32 flag) {
    play->actorCtx.flags.chest |= (1 << flag);
}

/**
 * Tests if current scene clear flag is set.
 */
s32 Flags_GetClear(PlayState* play, s32 flag) {
    return play->actorCtx.flags.clear & (1 << flag);
}

/**
 * Sets current scene clear flag.
 */
void Flags_SetClear(PlayState* play, s32 flag) {
    play->actorCtx.flags.clear |= (1 << flag);
}

/**
 * Unsets current scene clear flag.
 */
void Flags_UnsetClear(PlayState* play, s32 flag) {
    play->actorCtx.flags.clear &= ~(1 << flag);
}

/**
 * Tests if current scene temp clear flag is set.
 */
s32 Flags_GetTempClear(PlayState* play, s32 flag) {
    return play->actorCtx.flags.tempClear & (1 << flag);
}

/**
 * Sets current scene temp clear flag.
 */
void Flags_SetTempClear(PlayState* play, s32 flag) {
    play->actorCtx.flags.tempClear |= (1 << flag);
}

/**
 * Tests if current scene collectible flag is set.
 */
s32 Flags_GetCollectible(PlayState* play, s32 flag) {
    if (flag < 0x20) {
        return play->actorCtx.flags.collect & (1 << flag);
    } else {
        return play->actorCtx.flags.tempCollect & (1 << (flag - 0x20));
    }
}

/**
 * Sets current scene collectible flag.
 */
void Flags_SetCollectible(PlayState* play, s32 flag) {
    if (flag != 0) {
        if (flag < 0x20) {
            play->actorCtx.flags.collect |= (1 << flag);
        } else {
            play->actorCtx.flags.tempCollect |= (1 << (flag - 0x20));
        }
    }
}

/**
 * Tests if event_chk_inf flag is set.
 */
s32 Flags_GetEventChkInf(s32 flag) {
    const s32 bit = 1 << (flag & 0xF);
    return gSaveContext.eventChkInf[flag >> 4] & bit;
}

/**
 * Sets event_chk_inf flag.
 */
void Flags_SetEventChkInf(s32 flag) {
    const s32 bit = 1 << (flag & 0xF);
    const s32 idx = flag >> 4;
    gSaveContext.eventChkInf[idx] |= bit;
}


GLOBAL_ASM("asm/Actor_Destroy.s")

GLOBAL_ASM("asm/Actor_Delete.s")

GLOBAL_ASM("asm/ActorShadow_DrawFeet.s")

GLOBAL_ASM("asm/ActorShadow_Draw.s")

GLOBAL_ASM("asm/Actor_SetTextWithPrefix.s")

typedef void (*IChainHandler)(Actor* actor, InitChainEntry* chain);
extern "C" {
extern IChainHandler sIChainHandlers[];
}

void Actor_ProcessInitChain(Actor* actor, InitChainEntry* chain) {
    do {
        sIChainHandlers[chain->type](actor, chain);
    } while ((chain++->cont) != 0);
}

GLOBAL_ASM("asm/Actor_Spawn.s")

GLOBAL_ASM("asm/Actor_SetColorFilter.s")

GLOBAL_ASM("asm/Actor_UpdateBgCheckInfo.s")

GLOBAL_ASM("asm/Actor_GetScreenPos.s")

GLOBAL_ASM("asm/Actor_WorldPitchTowardPoint.s")

GLOBAL_ASM("asm/Actor_InitContext.s")

GLOBAL_ASM("asm/Actor_UpdateAll.s")

GLOBAL_ASM("asm/Actor_Init.s")

}
