#ifndef Z64SAVE_H
#define Z64SAVE_H

#include "z3Dmath.hpp"

typedef struct {
    /* 0x00 */ u8 buttonItems[5]; //B,Y,X,I,II
    /* 0x05 */ u8 buttonSlots[4]; //Y,X,I,II
    /* 0x0A */ u16 equipment;
} ItemEquips; // size = 0x0C

typedef struct {
    /* 0x00 */ u8 items[26];
    /* 0x1A */ s8 ammo[16];
    /* 0x2A */ u16 equipment;
    /* 0x2C */ u32 upgrades;
    /* 0x30 */ u32 questItems;
    /* 0x34 */ u8 dungeonItems[20];
    /* 0x48 */ s8 dungeonKeys[19];
    /* 0x5B */ s8 defenseHearts;
    /* 0x5C */ s16 gsTokens;
} Inventory; // size = 0x5E

typedef struct {
    /* 0x00 */ u32   chest;
    /* 0x04 */ u32   swch;
    /* 0x08 */ u32   clear;
    /* 0x0C */ u32   collect;
    /* 0x10 */ u32   unk;
    /* 0x14 */ u32   rooms1;
    /* 0x18 */ u32   rooms2;
} SaveSceneFlags; // size = 0x1C

typedef struct {
    /* 0x00 */ s16   scene;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ s16   angle;
} HorseData; // size = 0x0A

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ s16   yaw;
    /* 0x0E */ s16   playerParams;
    /* 0x10 */ s16   entranceIndex;
    /* 0x12 */ u8    roomIndex;
    /* 0x13 */ u8    data;
    /* 0x14 */ u32   tempSwchFlags;
    /* 0x18 */ u32   tempCollectFlags;
} RespawnData; // size = 0x1C

typedef struct {
    /* 0x00 */ Vec3i pos;
    /* 0x0C */ s32 yaw;
    /* 0x10 */ s32 playerParams;
    /* 0x14 */ s32 entranceIndex;
    /* 0x18 */ s32 roomIndex;
    /* 0x1C */ s32 set;
    /* 0x20 */ s32 tempSwchFlags;
    /* 0x24 */ s32 tempCollectFlags;
} FaroresWindData; // size = 0x28

// Save Context (ram start: 0x00587958)
typedef struct {
    /* 0x0000 */ s32          entranceIndex;
    /* 0x0004 */ s32          linkAge; // 0: Adult; 1: Child
    /* 0x0008 */ s32          cutsceneIndex;
    /* 0x000C */ u16          dayTime; // "zelda_time"
    /* 0x000E */ u8           masterQuestFlag;
    /* 0x000F */ char         unk_F[0x0001];
    /* 0x0010 */ s32          nightFlag;
    /* 0x0014 */ s32          unk_14;
    /* 0x0018 */ s32          unk_18;
    /* 0x001C */ s16          playerName[0x8];
    /* 0x002C */ u8           playerNameLength;
    /* 0x002D */ u8           zTargetingSetting;
    /* 0x002E */ s16          unk_2E;
    /* 0x0030 */ char         newf[6]; // string "ZELDAZ"
    /* 0x0036 */ u16          saveCount;
    /* 0x0038 */ char         unk_38[0x000A];
    /* 0x0042 */ u16          healthCapacity; // "max_life"
    /* 0x0044 */ s16          health; // "now_life"
    /* 0x0046 */ s8           magicLevel;
    /* 0x0047 */ s8           magic;
    /* 0x0048 */ s16          rupees;
    /* 0x004A */ u16          bgsHitsLeft;
    /* 0x004C */ u16          naviTimer;
    /* 0x004E */ u8           magicAcquired;
    /* 0x004F */ char         unk_4F;
    /* 0x0050 */ u8           doubleMagic;
    /* 0x0051 */ u8           doubleDefense;
    /* 0x0052 */ s8           bgsFlag;
    /* 0x0054 */ ItemEquips   childEquips;
    /* 0x0060 */ ItemEquips   adultEquips;
    /* 0x006C */ char         unk_6C[0x0012];
    /* 0x007E */ u16          sceneIndex;
    /* 0x0080 */ ItemEquips   equips;
    /* 0x008C */ Inventory    inventory;
    /* 0x00EC */ SaveSceneFlags sceneFlags[124];
    /* 0x0E7C */ FaroresWindData fw;
    /* 0x0EA4 */ char         unk_EA4[0x0010];
    /* 0x0EB4 */ u8           gsFlags[22]; //due to reordering, array is smaller
    /* 0x0ECA */ char         unk_ECA[0x0006]; //the extra two bytes move here
    /* 0x0ED0 */ u32          unk_ED0; //horseback archery highscore?
    /* 0x0ED4 */ char         unk_ED4[0x0008];
    /* 0x0EDC */ u32          unk_EDC; //horse race record time?
    /* 0x0EE0 */ u32          unk_EE0; //marathon race record time?
    /* 0x0EE4 */ char         unk_EE4[0x0008];
    /* 0x0EEC */ u16          eventChkInf[14]; // "event_chk_inf"
    /* 0x0F08 */ u16          itemGetInf[4]; // "item_get_inf"
    /* 0x0F10 */ u16          infTable[30]; // "inf_table"
    /* 0x0F4C */ char         unk_F34[0x0004];
    /* 0x0F50 */ u32          worldMapAreaData; // "area_arrival"
    /* 0x0F54 */ char         unk_F54[0x0410]; // TODO: scarecrow's song
    /* 0x1364 */ HorseData    horseData;
    /* 0x136E */ char         unk_136E[0x0002];
    /* 0x1370 */ u8           itemSlotDataRecords[26];
    /* 0x138A */ u8           itemMenuChild[24];
    /* 0x13A2 */ u8           itemMenuAdult[24];
    /* 0x13BA */ char         unk_13BA[0x0002];
    struct {
        /* 0x13BC */ u32 year;
        /* 0x13C0 */ u32 month;
        /* 0x13C4 */ u32 day;
        /* 0x13C8 */ u32 hour;
        /* 0x13CC */ u32 minute;
    }                         saveTime;
    /* 0x13D0 */ char         unk_13D0[0x0080];
    /* 0x1450 */ u32          bossBattleVictories[9];
    /* 0x1474 */ u32          bossBattleScores[9];
    /* 0x1498 */ char         unk_1498[0x0040]; //sheikah stone flags?
    /* 0x14D8 */ u16          checksum; // "check_sum"
    /* 0x14DC */ s32          fileNum; // "file_no"
    /* 0x14E0 */ char         unk_14E0[0x0004];
    /* 0x14E4 */ s32          gameMode;
    /* 0x14E8 */ s32          sceneSetupIndex;
    /* 0x14EC */ s32          respawnFlag; // "restart_flag"
    /* 0x14F0 */ RespawnData  respawn[3]; // "restart_data"
    /* 0x1544 */ char         unk_1544[0x000E];
    /* 0x1552 */ s16          nayrusLoveTimer;
    /* 0x1554 */ char         unk_1554[0x0008];
    /* 0x155C */ s16          rupeeAccumulator;
    /* 0x155E */ s16          timer1State;
    /* 0x1560 */ s16          timer1Value;
    /* 0x1562 */ s16          timer2State;
    /* 0x1564 */ s16          timer2Value;
    /* 0x1566 */ s16          timerX[2]; //changing these doesn't seem to actually move the timer?
    /* 0x156A */ s16          timerY[2]; //changing these doesn't seem to actually move the timer?
    /* 0x156E */ u8           nightSeqIndex;
    /* 0x156F */ u8           buttonStatus[5];
    /* 0x1574 */ char         unk_1574[0x000F];
    /* 0x1584 */ u16          magicMeterSize;
    /* 0x1586 */ char         unk_1586[0x0004];
    /* 0x158A */ u16          eventInf[4];
    /* 0x1592 */ u16          mapIndex;
    /* 0x1594 */ char         unk_1594[0x000C];
    /* 0x15A0 */ u16          nextCutsceneIndex;
    /* 0x15A2 */ u8           cutsceneTrigger;
    /* 0x15A3 */ char         unk_15A3[0x000F];
    /* 0x15B2 */ s16          healthAccumulator;
    /* 0x15B4 */ char         unk_15B4[0x0010];
} SaveContext; // size = 0x15C4

typedef enum {
    /* 0x00 */ RESPAWN_MODE_DOWN,   /* Normal Void Outs */
    /* 0x01 */ RESPAWN_MODE_RETURN, /* Grotto Returnpoints */
    /* 0x02 */ RESPAWN_MODE_TOP     /* Farore's Wind */
} RespawnMode;

typedef enum {
    /* 0x00 */ BTN_ENABLED,
    /* 0xFF */ BTN_DISABLED = 0xFF
} ButtonStatus;

typedef enum {
    /* 0x00 */ CHAMBER_CS_FOREST,
    /* 0x01 */ CHAMBER_CS_FIRE,
    /* 0x02 */ CHAMBER_CS_WATER,
    /* 0x03 */ CHAMBER_CS_SPIRIT,
    /* 0x04 */ CHAMBER_CS_SHADOW,
    /* 0x05 */ CHAMBER_CS_LIGHT
} ChamberCutsceneNum;

typedef enum {
    /* 0x00 */ HS_HBA,          // horseback archery
    /* 0x01 */ HS_POE_POINTS,
    /* 0x02 */ HS_FISHING,
    /* 0x03 */ HS_HORSE_RACE,
    /* 0x04 */ HS_MARATHON,
    /* 0x05 */ HS_UNK_05,
    /* 0x06 */ HS_DAMPE_RACE
} HighScores;

typedef enum {
    /* 0 */ SUNSSONG_INACTIVE,
    /* 1 */ SUNSSONG_START, // the suns ocarina effect signals that the song has finished playing
    /* 2 */ SUNSSONG_SPEED_TIME, // suns was played where time passes, speed up the advancement of time
    /* 3 */ SUNSSONG_SPECIAL // time does not advance, but signals the song was played. used for freezing redeads
} SunsSongState;

#endif
