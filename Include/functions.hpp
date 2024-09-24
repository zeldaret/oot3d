#pragma once
#include "z3D.hpp"

void ActorShape_Init(ActorShape* shape, f32 yOffset, ActorShadowFunc shadowDraw, f32 shadowScale);
void ActorShadow_DrawCircle(Actor* actor, Lights* lights, PlayState* play);

Actor* Actor_Find(ActorContext* actorCtx, s32 actorId, s32 actorCategory);

PosRot Actor_GetWorldPosShapeRot(Actor* actor);
s32 Actor_HasNoParent(Actor* actor, PlayState* play);
s32 Actor_HasParent(Actor* actor, PlayState* play);
s32 Actor_IsFacingAndNearPlayer(Actor* actor, f32 range, s16 angle);
s32 Actor_IsMounted(PlayState* play, Actor* horse);
void Actor_Kill(Actor* actor);
void Actor_Noop(Actor* actor, GameState* state);
s32 Actor_NotMounted(PlayState* play, Actor* actor);
void Actor_ProcessInitChain(Actor* actor, InitChainEntry* chain);
void Actor_SetFocus(Actor* actor, f32 yOffset);
s32 Actor_SetRideActor(PlayState* play, Actor* horse, s32 mountSide);
void Actor_SetScale(Actor* actor, f32 scale);
Actor* Actor_Spawn(ActorContext* actorCtx, PlayState* play, s16 actorId, f32 posX, f32 posY, f32 posZ,
                   s16 rotX, s16 rotY, s16 rotZ, s16 params, s32 unk);
Actor* Actor_SpawnAsChild(ActorContext* actorCtx, Actor* parent, PlayState* play, s16 actorId, f32 posX,
                          f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, s16 params);
void Actor_UpdateBgCheckInfo(PlayState* play, Actor* actor, f32 wallCheckHeight, f32 wallCheckRadius,
                             f32 ceilingCheckHeight, s32 flags);
f32 Actor_WorldDistXYZToActor(Actor* actorA, Actor* actorB);
s32 Actor_IsFacingPlayer(Actor* actor, s16 angle);
void Actor_MoveForward(Actor* actor);
u32 Actor_ProcessTalkRequest(Actor* actor, PlayState* play);
void Actor_GetScreenPos(PlayState* play, Actor* actor, s16* x, s16* y);

void Lib_MemSet(u8* dest, size_t size, u8 val);

void Math_ApproachS(s16* pValue, s16 target, s16 scale, s16 step);
void Math_ApproachF(f32* pValue, f32 target, f32 fraction, f32 step);
void Math_ApproachZeroF(f32* pValue, f32 fraction, f32 step);
f32 Math_CosS(s16 angle);
f32 Math_FAtan2F(f32 y, f32 x);
s16 Math_Atan2S(f32 x, f32 y);
f32 Math_SinS(s16 angle);
s32 Math_StepToF(f32* pValue, f32 target, f32 step);
s16 Math_SmoothStepToS(s16* pValue, s16 target, s16 scale, s16 step, s16 minStep);
f32 Math_SmoothStepToF(f32* pValue, f32 target, f32 fraction, f32 step, f32 minStep);
void Math_Vec3f_Copy(Vec3f* dest, Vec3f* src);
f32 Math_Vec3f_DistXYZ(Vec3f* a, Vec3f* b);
void Math_Vec3s_ToVec3f(Vec3f* dest, Vec3s* src);

void VEC3TransformAsm(Vector3f*, MTX34*, Vector3f*);

ZARInfo* FUN_00372f38(Actor* actor, PlayState* play, SkeletonAnimationModel** skelAnimModel, s32 arg3,
                      s32 arg4);
void FUN_00350f34(Actor* actor, SkeletonAnimationModel** skelAnimModel, s32 arg2);
void FUN_003508b8(Actor* actor, SkeletonAnimationModel* skelAnimModel, s32 arg2);
void MTX34CopyAsm(MTX34* dst, MTX34* src);
void FUN_00370734(SkelAnime* skelAnime);
void FUN_00353c9c(Actor* actor, PlayState* play, SkelAnime* skelAnime, s32 cmbIndex, s32 csabIndex,
                  void* jointTable, void* morphTable, s32 limbCount);
void SkelAnime_SetFaceAnimations(FaceAnimations* param_1, SkelAnime* skelAnime, s32 param_3, s32 param_4, s32 param_5);
void SkelAnime_DrawOpa(SkelAnime* skelAnime, MTX34* modelMtx, OverrideLimbDrawOpa overrideLimbDraw,
                       PostLimbDrawOpa postLimbDraw, Actor* actor, s32 arg5);
void FUN_003717ac(SkelAnime* skelAnime, struct_80034EC0_Entry* animations, s32 index);
s32 Animation_OnFrameImpl(SkelAnime* skelAnime, f32 frame, f32 updateRate);
Camera* Gameplay_GetCamera(PlayState* play, s16 camId);
void FUN_00367494(PlayState* play, CutsceneContext* csCtx);
s32 FUN_0036e980(PlayState* play, Actor* actor, u8 arg2);
s16 Gameplay_CreateSubCamera(PlayState* play);
s16 Gameplay_ChangeCameraStatus(PlayState* play, s16 camId, s16 status);
void Audio_PlaySoundGeneral(u32 sfxId, Vec3f* a1, u8 a2, f32* a3, f32* a4, s8* a5);
void Audio_PlayActorSound2(Actor* actor, s32 arg1);
void FUN_0035af04(Player* player, s32 arg1);
void Audio_QueueSeqCmd(s32 arg0, s32 arg1, s32 arg2);
void TitleCard_InitBossName(PlayState* play, TitleCardContext* titleCtx, void* texture, s16 x, s16 y,
                            s16 width, s16 height, f32 f);
void FUN_0036e9b8(PlayState* play, s16 camId, s16 arg2);
void FUN_00367374(PlayState* play, CutsceneContext* csCtx);
s32 Gameplay_CameraSetAtEye(PlayState* play, s16 camId, Vec3f* at, Vec3f* eye);
f32 Rand_ZeroFloat(f32 f);
void FUN_0036f5d8(PlayState* play, s16 arg1, s16 arg2, s16 arg3);
f32 Rand_CenteredFloat(f32 f);
s16 Rand_S16Offset_003702c8(s16 base, s16 range);
void EffectSsKFire_Spawn(PlayState* play, Vec3f* pos, Vec3f* velocity, Vec3f* accel, s16 scaleMax, u8 type);
s32 FUN_0035b164(void);
s32 FUN_0035b0a0(void);
void FUN_0035af20(PlayState* play, s32 arg1, s16 arg2, s16 arg3, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4,
                  f32 f5);
void FUN_00365860(Actor* actor);
void FUN_0036b96c(Actor* actor);
void FUN_003731e0(SkelAnime* skelAnime);
void FUN_0036788c(void* arg0);
void FUN_003542c4(void* arg0, s32 arg1, s32 arg2);
EnItem00* Item_DropCollectible(PlayState* play, Vec3f* spawnPos, s16 params);
s32 Collider_InitCylinder(PlayState* play, ColliderCylinder* collider);
s32 Collider_DestroyCylinder(PlayState* play, ColliderCylinder* collider);
s32 Collider_SetCylinder(PlayState* play, ColliderCylinder* collider, Actor* actor, ColliderCylinderInit* src);
void Collider_UpdateCylinder(Actor* actor, ColliderCylinder* collider);
void CollisionCheck_SetInfo(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit* init);
void CollisionCheck_SetInfo2(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit2* init);
void SkelAnime_Free(SkelAnime* skelAnime, PlayState* play);
void SkelAnime_Free2(SkelAnime* skelAnime);
void SkelAnime_DrawOpa(SkelAnime* skelAnime, MTX34* modelMtx, OverrideLimbDrawOpa overrideLimbDraw,
                       PostLimbDrawOpa postLimbDraw, Actor* actor, s32 arg5);

s32 Flags_GetSwitch(PlayState* play, s32 flag);
void Flags_SetSwitch(PlayState* play, s32 flag);
void Flags_UnsetSwitch(PlayState* play, s32 flag);
s32 Flags_GetTreasure(PlayState* play, s32 flag);
void Flags_SetTreasure(PlayState* play, s32 flag);
s32 Flags_GetClear(PlayState* play, s32 flag);
void Flags_SetClear(PlayState* play, s32 flag);
void Flags_UnsetClear(PlayState* play, s32 flag);
s32 Flags_GetTempClear(PlayState* play, s32 flag);
void Flags_SetTempClear(PlayState* play, s32 flag);
s32 Flags_GetCollectible(PlayState* play, s32 flag);
void Flags_SetCollectible(PlayState* play, s32 flag);
s32 Flags_GetEventChkInf(s32 flag);
void Flags_SetEventChkInf(s32 flag);

Actor* FUN_00346d94(PlayState* play, Actor* explosiveActor);
s32 CollisionCheck_SetAC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_SetAT(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_SetOC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
f32 Rand_ZeroOne(void);
void EffectSsKakera_Spawn(PlayState* play, Vec3f* pos, Vec3f* velocity, Vec3f* arg3, s16 gravity, s16 arg5,
                          s16 arg6, s16 arg7, s16 arg8, s16 scale, s16 arg10, s16 arg11, s32 life, s16 colorIdx,
                          s16 objId, void* dList);
void FUN_0037378c(PlayState* play, Vec3f* arg1, f32 arg2, s32 arg3, s16 arg4, s16 arg5, u8 arg6);
void Audio_PlaySoundAtPosition(PlayState* play, Vec3f* pos, s32 duration, u32 sfxId);
void FUN_00372244(void* arg0, s16 arg1, u32 sfxId);
s32 GiveItem(Actor* actor, PlayState* play, s32 getItemId, f32 xyRange, f32 yRange);
void DynaPolyActor_Init(DynaPolyActor* dynaActor, s32 flags);
void* DynaPolyInfo_Alloc(DynaPolyActor* dynaActor, GameState* state, s32 index);
ZARInfo* FUN_003532c0(ZARInfo* zarInfo, s32 arg1);
s32 DynaPoly_SetBgActor(PlayState* play, DynaCollisionContext* dyna, Actor* actor, CollisionHeader* colHeader);
void DynaPoly_DeleteBgActor(PlayState* play, DynaCollisionContext* dyna, s32 bgId);
void FUN_0036b940(PlayState* play, DynaCollisionContext* dyna, s32 bgId);
void FUN_0036d15c(PlayState* play, DynaCollisionContext* dyna, s32 bgId);
u32 FUN_00374be8(PlayState* play, u32 arg1);
void FUN_00357fd0(Player* player, void* arg1, Vec3f* pos);
void FUN_003695cc(SkeletonAnimationModel* skelAnimModel, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6,
                  f32 arg7);
s32 FUN_00369f3c(PlayState* play);
void EffectSsHahen_SpawnBurst(PlayState* play, Vec3f* pos, f32 burstScale, s16 unused, s16 scale,
                              s16 randScaleRange, s16 count, s16 objId, s16 life, void* dList);
void FUN_003716f0(PlayState* play, s16 entranceIndex, u32 sceneLoadFlag, u32 fadeTransition);
s32 Math3D_PointInSquare2D(f32 upperLeftX, f32 lowerRightX, f32 upperLeftY, f32 lowerRightY, f32 x, f32 y);
void FUN_0035239c(s16 arg0);
void FUN_00367c7c(PlayState*, u16 textID, Actor* actor);
void Audio_QueueSeqCmd(s32 arg0, s32 arg1, s32 arg2);
void FUN_00354358(s32 arg0);
void FUN_00374bb8(PlayState* play, Actor* actor, f32 arg2, s16 arg3, f32 arg4);
void FUN_0036c5d8(Actor* actor, Vec3f* result, Vec3f* arg2);
void FUN_00373264(Actor* actor, s32 arg1);
u32 PauseContext_GetState(void);
void GraphicsContext_UnknownStub(GraphicsContext*);
void FUN_00370f5c(PlayState* play, s16* arg1, s16* arg2, s32 arg3);
s32 Inventory_ReplaceItem(PlayState* play, u16 oldItem, u16 newItem);
u16 Text_GetFaceReaction(PlayState* play, u32 reactionSet);
s8 FUN_0036bc84(PlayState* play);
u8 Message_GetState(MessageContext* msgCtx);
u8 Message_ShouldAdvance(PlayState* play);
void Message_ContinueTextbox(PlayState* play, u16 textId);
void FUN_00371e6c(s16 seconds);
void Gameplay_ClearCamera(PlayState* play, s16 camId);
s32 FUN_0036bb28(Actor* actor, PlayState* play, f32 arg2);
void FUN_0035ae08(Actor* actor, u32 sfxId);

void FUN_00312fc4(void* address, size_t size);
void FUN_00311c70(u32 arg0);

float sqrtf(float arg);
