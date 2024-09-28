#ifndef _Z3D_H_
#define _Z3D_H_

#include "z3Dactor.hpp"
#include "z3Dvec.hpp"
#include "z3Dcutscene.hpp"
#include "z3Ditem.hpp"
#include "z3Dobject.hpp"
#include "z3Danimation.hpp"
#include "z3Dcamera.hpp"
#include "z3Dcollision_check.hpp"
#include "z3Dbgcheck.hpp"
#include "z3Dsave.hpp"
#include "z3Dscene.hpp"
#include "color.hpp"
#include "math.hpp"
#include "ichain.hpp"
#include "stddef.hpp"
#include "regs.hpp"

typedef struct GraphicsContext GraphicsContext; //TODO

typedef struct {
    /* 0x0000 */ u32 size;
    /* 0x0004 */ void* bufp;
    /* 0x0008 */ void* head;
    /* 0x000C */ void* tail;
} TwoHeadArena; // size = 0x10

typedef struct {
    /* 0x000 */ s32    topyY;
    /* 0x004 */ s32    bottomY;
    /* 0x008 */ s32    leftX;
    /* 0x00C */ s32    rightX;
    /* 0x010 */ f32    fovy;  // vertical field of view in degrees
    /* 0x014 */ f32    zNear; // distance to near clipping plane
    /* 0x018 */ f32    zFar;  // distance to far clipping plane
    /* 0x01C */ char   unk_1C[0x014];
    /* 0x030 */ Vec3f  eye;
    /* 0x03C */ Vec3f  lookAt;
    /* 0x048 */ Vec3f  up;
    /* 0x054 */ char   unk_54[0x150];
    /* 0x1A4 */ Vec3f  unk_1A4;
    /* 0x1B0 */ Vec3f  unk_1B0;
    /* 0x1BC */ Vec3f  unk_1BC;
    /* 0x1C8 */ Vec3f  unk_1C8;
    /* 0x1D4 */ f32    unk_1D4;
    /* 0x1D8 */ s8     flags;
    /* 0x1D9 */ char   unk_1D9[0x003];
} View; // size = 0x1DC

typedef struct {
    /* 0x00 */ s32 enabled;
    /* 0x04 */ s32 timer;
} FrameAdvanceContext; // size = 0x8

typedef struct {
    /* 0x00 */ u8*  texture;
    /* 0x04 */ s16  unk_04;
    /* 0x06 */ s16  unk_06;
    /* 0x08 */ s16  unk_08;
    /* 0x0A */ s16  unk_0A;
    /* 0x0C */ s32  unk_0C;
    /* 0x10 */ u8   delayA;
    /* 0x11 */ u8   delayB;
    /* 0x12 */ s16  unk_12;
    /* 0x14 */ s16  unk_14;
    /* 0x16 */ s16  unk_16;
} TitleCardContext; // size = 0x18

typedef struct {
    /* 0x00 */ u32    length; // number of actors loaded of this type
    /* 0x04 */ Actor* head;  // pointer to first actor of this type
} ActorListEntry; // size = 0x08

typedef struct {
    /* 0x0000 */ u8     unk_00;
    /* 0x0001 */ char   unk_01[0x01];
    /* 0x0002 */ u8     unk_02;
    /* 0x0003 */ u8     unk_03;
    /* 0x0004 */ char   unk_04[0x04];
    /* 0x0008 */ u8     total; // total number of actors loaded
    /* 0x0009 */ char   unk_09[0x03];
    /* 0x000C */ ActorListEntry actorLists[12];
    // /* 0x006C */ TargetContext targetCtx;
    /* 0x006C */ char   unk_6C[0x130];
    struct {
        /* 0x019C */ u32    swch;
        /* 0x01A0 */ u32    tempSwch;
        /* 0x01A4 */ u32    unk0;
        /* 0x01A8 */ u32    unk1;
        /* 0x01AC */ u32    chest;
        /* 0x01B0 */ u32    clear;
        /* 0x01B4 */ u32    tempClear;
        /* 0x01B8 */ u32    collect;
        /* 0x01BC */ u32    tempCollect;
    }                   flags;
    /* 0x01C0 */ TitleCardContext titleCtx;
} ActorContext; // TODO: size = 0x1D8

typedef struct CutsceneContext {
    /* 0x00 */ char  unk_00[0x4];
    /* 0x04 */ void* segment;
    /* 0x08 */ u8    state;
    /* 0x09 */ char  unk_09[0x0B];
    /* 0x14 */ s32   unk_14;
    /* 0x18 */ s32   unk_18;
    /* 0x1C */ f32   unk_1C;
    /* 0x20 */ u16   frames;
    /* 0x22 */ u16   unk_22;
    /* 0x24 */ s32   unk_24;
    /* 0x28 */ u16   unk_28;
    /* 0x2A */ u16   unk_2A;
    /* 0x2C */ u16   unk_2C;
    /* 0x2E */ u16   unk_2E;
    /* 0x30 */ char  unk_30[0x04];
    /* 0x34 */ s8    unk_34;
    /* 0x35 */ s8    unk_35;
    /* 0x36 */ char  unk_36[0x0A];
    /* 0x40 */ CsCmdActorAction* linkAction;
    /* 0x44 */ CsCmdActorAction* npcActions[10]; // "npcdemopnt"
} CutsceneContext; // size = 0x6C

typedef struct OcLine OcLine; //TODO
#define COLLISION_CHECK_AT_MAX 50
#define COLLISION_CHECK_AC_MAX 60
#define COLLISION_CHECK_OC_MAX 50
#define COLLISION_CHECK_OC_LINE_MAX 3

typedef struct {
    /* 0x000 */ s16 colAtCount;
    /* 0x002 */ u16 sacFlags;
    /* 0x004 */ Collider* colAt[COLLISION_CHECK_AT_MAX];
    /* 0x0CC */ s32 colAcCount;
    /* 0x0D0 */ Collider* colAc[COLLISION_CHECK_AC_MAX];
    /* 0x1C0 */ s32 colOcCount;
    /* 0x1C4 */ Collider* colOc[COLLISION_CHECK_OC_MAX];
    /* 0x28C */ s32 colOcLineCount;
    /* 0x290 */ OcLine* colOcLine[COLLISION_CHECK_OC_LINE_MAX];
} CollisionCheckContext; // size = 0x29C

struct ZARFileTypeEntry {
    /* 0x00 */ u32 numFiles;
    /* 0x04 */ u32 filesListOffset;
    /* 0x08 */ u32 typeNameOffset;
    /* 0x0C */ u32 unk_0C;
};

struct ZARInfo {
    void* FUN_003532c0(s32 index);
    void* GetQDBByIndex(s32 index);
    void* GetCMABByIndex(s32 index);

    /* 0x00 */ void* buf;
    /* 0x04 */ char unk_04[0x08];
    /* 0x0C */ ZARFileTypeEntry* fileTypes;
    /* 0x10 */ char unk_10[0xC];
    /* 0x1C */ s32 filetypeMap[11];
    /* 0x48 */ char unk_48[0x04];
    /* 0x4C */ void*** cmbPtrs;  /* Really, this is a pointer to an array of pointers to CMB managers,
                                    the first member of which is a pointer to the CMB data */
    /* 0x50 */ void*** csabPtrs; /* Same as above but for CSAB */
    /* 0x54 */ char unk_54[0x04];
    /* 0x58 */ void*** cmabPtrs; /* Same as above but for CMAB */
    /* 0x5C */ void*** unk_5C;
    /* 0x60 */ void*** qdbPtrs;
    /* 0x64 */ char unk_64[0x0C];
}; // size = 0x70

typedef struct {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk_02[0x06];
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ char unk_0C[0x4];
    /* 0x10 */ ZARInfo zarInfo;
} ObjectStatus; // size = 0x80

typedef struct {
    /* 0x000 */ u8 num;
    /* 0x001 */ char unk_01[0x3];
    /* 0x004 */ ObjectStatus status[OBJECT_EXCHANGE_BANK_MAX];
} ObjectContext; // size = 0x984

typedef struct {
    /* 0x00 */ char filename[0x40];
    /* 0x40 */ u32 size;
} ObjectFile;

typedef struct {
    /* 0x00 */ s16   id;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ Vec3s rot;
    /* 0x0E */ s16   params;
} ActorEntry; // size = 0x10

typedef struct GameAllocEntry {
    /* 0x00 */ struct GameAllocEntry* next;
    /* 0x04 */ struct GameAllocEntry* prev;
    /* 0x08 */ u32 size;
    /* 0x0C */ u32 unk_0C;
} GameAllocEntry; // size = 0x10

typedef struct {
    /* 0x00 */ GameAllocEntry base;
    /* 0x10 */ GameAllocEntry* head;
} GameAlloc; // size = 0x14

struct GameState;

typedef void (*GameStateFunc)(struct GameState* gameState);

typedef struct GameState {
    /* 0x000 */ GraphicsContext* gfxCtx;
    /* 0x004 */ GameStateFunc main;
    /* 0x008 */ GameStateFunc destroy; // "cleanup"
    /* 0x00C */ GameStateFunc init;
    /* 0x010 */ u32 size;
    /* 0x014 */ char unk_14[0xC0];
    /* 0x0D4 */ TwoHeadArena tha;
    /* 0x0E4 */ GameAlloc alloc;
    /* 0x0F8 */ u32 frames;
    /* 0x0FC */ char unk_FC[0x5];
    /* 0x101 */ u8 running;
    /* 0x102 */ char unk_102[0x2];
} GameState; // size = 0x104

typedef struct {
    /* 0x000 */ GameState state;
    /* 0x104 */ char unk_104[0x1F0];
    /* 0x2F4 */ u8 exit;
    /* 0x2F5 */ char unk_2F5[0x3];
} TitleContext; // size = 0x2F8

typedef struct {
    /* 0x00 */ char unk_00[0x40];
} subPlayState_5FCC; // size at least 0x40

typedef struct {
    /* 0x000 */ char unk_00[0x7C0];
    /* 0x7C0 */ u16 unk_7C0;
    /* 0x7C2 */ char unk_7C2[0x796];
} RoomContext; // size 0xF58

typedef struct {
    /* 0x000 */ char unk_000[0x2E0]; // Likely tons left
} MessageContext;

// Play State (ram start: 0871E840)
typedef struct PlayState {
    /* 0x0000 */ GameState state;
    /* 0x0104 */ s16 sceneNum;
    /* 0x0106 */ u8 sceneConfig;
    /* 0x0107 */ char unk_107[0x0009];
    /* 0x0110 */ void* sceneSegment;
    /* 0x0114 */ void* sceneZAR;
    /* 0x0118 */ ZARInfo sceneZARInfo;
    /* 0x0188 */ View view;
    /* 0x0364 */ Camera mainCamera;
    /* 0x0520 */ Camera subCameras[3];
    /* 0x0A54 */ Camera*               cameraPtrs[4];
    /* 0x0A64 */ s16                   activeCamera;
    /* 0x0A66 */ char                  unk_A66[0x002A];
    /* 0x0A90 */ FrameAdvanceContext   frameAdvCtx;
    /* 0x0A98 */ CollisionContext      colCtx;
    /* 0x208C */ ActorContext          actorCtx;
    /* 0x2264 */ char                  unk_2264[0x0034];
    /* 0x2298 */ CutsceneContext       csCtx; // "demo_play"
    /* 0x2304 */ char                  unk_2304[0x059C];
    /* 0x28A0 */ MessageContext        msgCtx;
    /* 0x2B80 */ char                  unk_2B80[0x0A80];
    /* 0x3600 */ f32                   unk_3600;
    /* 0x3604 */ char                  unk_3604[0x0454];
    /* 0x3A58 */ ObjectContext         objectCtx;
    /* 0x43DC */ char                  unk_43DC[0x0854];
    /* 0x4C30 */ RoomContext           roomCtx;
    /* 0x5B88 */ char                  unk_5B88[0x0078];
    /* 0x5C00 */ u8                    linkAgeOnLoad;
    /* 0x5C01 */ char                  unk_5C01[0x001F];
    /* 0x5C20 */ Path*                 setupPathList;
    /* 0x5C24 */ char                  unk_5C24[0x0009];
    /* 0x5C2D */ s8                    sceneLoadFlag; // "fade_direction"
    /* 0x5C2E */ char                  unk_5C2E[0x0004];
    /* 0x5C32 */ s16                   nextEntranceIndex;
    /* 0x5C34 */ char                  unk_5C34[0x0042];
    /* 0x5C76 */ u8                    fadeOutTransition;
    /* 0x5C78 */ CollisionCheckContext colChkCtx;
    /* 0x5F14 */ char                  unk_5F14[0x0084];
    /* 0x5F98 */ u16                   envFlags[20];
    /* 0x5FC0 */ char                  unk_5FC0[12];
    /* 0x5FCC */ subPlayState_5FCC unk_5FCC;
    //TODO

    ObjectStatus* GetObjectStatus(u8 objBankIdx) {
        if ((objBankIdx < OBJECT_EXCHANGE_BANK_MAX) && (objectCtx.status[objBankIdx].unk_08 != 0)) {
            return &objectCtx.status[objBankIdx];
        } else {
            return NULL;
        }
    }

    void FUN_0037573c(void* csSegment);
    u8 GetCutsceneState();
    void SetCutsceneState(u8 csState);
} PlayState; // size = 0x5F14 TODO

typedef struct StaticContext {
    /* 0x0000 */ char unk_0[0x0E72];
    /* 0x0E72 */ u16 collisionDisplay;
    /* 0x0E74 */ char unk_E74[0x015C];
    /* 0x0FD0 */ u16 renderGeometryDisable;
    /* 0x0FD2 */ char unk_FD2[0x0602];
} StaticContext; //size 0x15D4
// _Static_assert(sizeof(StaticContext) == 0x15D4, "Static Context size");

typedef enum {
    DPM_UNK = 0,
    DPM_PLAYER = 1,
    DPM_ENEMY = 2,
    DPM_UNK3 = 3
} DynaPolyMoveFlag;

typedef struct {
    /* 0x00 */ s8  scene;
    /* 0x01 */ s8  spawn;
    /* 0x02 */ u16 field;
} EntranceInfo; // size = 0x4

typedef struct {
    /* 0x00 */ char infoFilename[0x44];
    /* 0x44 */ char filename[0x44];
    /* 0x88 */ char unk_88[0x01];
    /* 0x89 */ u8   config;
    /* 0x8A */ char unk_8A[0x02];
} Scene; // size = 0x8C

typedef struct {
    /* 0x00 */ s16 objectId;
    /* 0x02 */ u8 objectModelIdx;
    /* 0x03 */ char unk_03[0x3];
} DrawItemTableEntry;

typedef struct {
    /* 0x00 */ u8 scene;
    /* 0x01 */ u8 flags1;
    /* 0x02 */ u8 flags2;
    /* 0x03 */ u8 flags3;
} RestrictionFlags;

// Game Info aka. Static Context
// Data normally accessed through REG macros (see regs.h)
typedef struct {
    /* 0x00 */ s32  regPage;   // 1 is first page
    /* 0x04 */ s32  regGroup;  // "register" group (R, RS, RO, RP etc.)
    /* 0x08 */ s32  regCur;    // selected register within page
    /* 0x0C */ s32  dpadLast;
    /* 0x10 */ s32  repeat;
    /* 0x14 */ s16  data[REG_GROUPS * REG_PER_GROUP]; // 0xAE0 entries
} GameInfo; // size = 0x15D4

extern GameInfo* gGameInfo;

typedef enum {
    /*  0 */ TEXT_STATE_NONE,
    /*  1 */ TEXT_STATE_DONE_HAS_NEXT,
    /*  2 */ TEXT_STATE_CLOSING,
    /*  3 */ TEXT_STATE_DONE_FADING,
    /*  4 */ TEXT_STATE_CHOICE,
    /*  5 */ TEXT_STATE_EVENT,
    /*  6 */ TEXT_STATE_DONE,
    /*  7 */ TEXT_STATE_SONG_DEMO_DONE, 
    /*  8 */ TEXT_STATE_8, 
    /*  9 */ TEXT_STATE_9, 
    /* 10 */ TEXT_STATE_AWAITING_NEXT
} TextState;

#define gStaticContext (*(StaticContext*)0x08080010)
#define gObjectTable ((ObjectFile*)0x53CCF4)
#define gEntranceTable ((EntranceInfo*)0x543BB8)
#define gItemUsabilityTable ((u8*)0x506C58)
#define gDungeonSceneTable ((Scene*)0x4DC400)
#define gMQDungeonSceneTable ((Scene*)0x4DCBA8)
#define gSceneTable ((Scene*)0x545484)
#define gRandInt (*(u32*)0x50C0C4)
#define gRandFloat (*(f32*)0x50C0C8)
#define gDrawItemTable ((DrawItemTableEntry*)0x4D88C8)
#define gRestrictionFlags ((RestrictionFlags*)0x539DC4)
#define PLAYER ((Player*)play->actorCtx.actorList[ACTORCAT_PLAYER].first)

#endif //_Z3D_H_
