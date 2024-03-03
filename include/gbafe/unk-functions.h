#pragma once

#include "global.h"

int GetPlayerLeaderUnitId(void);
int GetItemIndex(int item);
void UnitHideIfUnderRoof(struct Unit * unit);
void CharStoreAI(struct Unit * unit, const struct UnitDefinition * uDef);
int GetUnitSupporterInitialExp(struct Unit * unit, int num);
int GetAutoleveledStatIncrease(int growth, int levelCount);
int GetCurrentPromotedLevelBonus(void);
int GetStatIncrease(int growth);
void ClearUnitSupports(struct Unit * unit);
void sub_802A21C(void);
void PidStatsAddMove(u8 pid, int amount);
void PidStatsSubFavval08(u8 pid);
void BeginTargetList(int x, int y);
void EnlistTarget(int x, int y, int uid, int extra);
void RenderMap(void);
void RenderMapForFade(void);
void RefreshEntityMaps(void);
void StartMapFade(bool locksGame);
void RefreshUnitSprites(void);
void sub_807B32C(void);
void sub_80799E4(void);
char * DecodeMsg(int id);
void EnableAllLightRunes(void);
void DisableAllLightRunes(void);
void PidStatsRecordBattleResult(void);
void PidStatsAddBattleAmt(struct Unit * unit);
int GetBallistaItemAt(int xPos, int yPos);
int GetUnitSupportBonuses(struct Unit * unit, struct SupportBonuses * bonuses);
bool sub_8028620(struct Unit * unit);
void PidStatsAddExpGained(u8 pid, int expGain);
int GetMapChangeIdAt(int x, int y);
void EndAllMus(void);
void StartBattleManim(void);
void WriteSuspendSave(int slot);
void StartBgmVolumeChange(int volume_from, int volume_to, int duration, ProcPtr parent);
void FadeBgmOut(int volume);
void PutUiHand(int x, int y);
void DisplayBmTextShadow(int x, int y);
void InitScanlineEffect(void);
void SwapScanlineBufs(void);
u16 * sub_8077CEC(int, int);
void sub_80781C8(u16 *, s16, s16, s16, s16, s16, s16);
void QuintessenceFx_OnHBlank(void);
void TryLockParentProc(ProcPtr);
void TryUnlockParentProc(ProcPtr);

// GetTextPrintDelay
int IsFirstPlaythrough(void);
// sub_802E3E0
// ResetBmSt
// sub_802E4E8
// sub_802E5B4
// ResumeChapterFromSuspend
// sub_802E768
// sub_802E7E0
// sub_802E804
// sub_802E834
// StartMapMain
// EndMapMain
// CleanupUnitsBeforeChapter
// ResumeMapMainDuringPhase
// ResumeMapMainDuringAction
// ResumeMapMainDuringBerserk
// ResumeMapMainDuringArena
// ResumeMapMainDuringPhaseChange
// sub_802EB7C
// sub_802EBA0
// sub_802EBB0
// sub_802EBB8
// sub_802EBCC
// sub_802EBD4
// sub_802EBF8
// sub_802EC3C
// AddItemToConvoy
// RemoveItemFromConvoy
// GetConvoyItemSlot
// sub_802ECE4
// sub_802ED30
// GetSupplyUnit
// InitUnitStack
// PushUnit
// LoadPlayerUnitsFromUnitStack
// LoadPlayerUnitsFromUnitStack2
// sub_802EE6C
// sub_802EF4C
// sub_802EF68
// sub_802EF8C
// sub_802EFB8
// sub_802EFE4
// sub_802F0B0
// sub_802F0C8
// sub_802F0E4
// sub_802F154
// sub_802F240
// sub_802F290
// sub_802F2E0
// sub_802F428
// sub_802F578
// sub_802F5A0
// sub_802F5AC
// sub_802F5B8
// sub_802F5C4
// sub_802F624
// sub_802F64C
// sub_802F6A0
// sub_802F6C4
// sub_802F6D4
// sub_802F6E4
// sub_802F7F4
// sub_802F848
// sub_802F858
// sub_802F870
// sub_802F900
// sub_802F92C
// sub_802F97C
// sub_802F990
// sub_802F9E0
// sub_802FA0C
// sub_802FAB4
// sub_802FB5C
// sub_802FC04
// sub_802FC10
// sub_802FC20
// sub_802FCD4
// sub_802FD04
// sub_802FD28
// sub_802FD68
// sub_802FD88
// sub_802FE20
// sub_802FE2C
// sub_802FE70
// sub_802FE90
// sub_802FF34
// sub_802FF60
// sub_802FF80
// sub_802FF94
// sub_8030038
// sub_80300BC
// sub_803012C
// sub_803022C
// sub_80302D0
// sub_8030314
// sub_8030340
// sub_80303BC
// sub_8030448
// sub_8030600
// sub_8030664
// sub_80306D4
// sub_8030718
// sub_80307D4
// GetPlayerLeaderUnitId
// sub_8030814
// sub_8030870
// sub_803087C
// sub_8030890
// sub_80308C8
// sub_80308D8
// sub_80308E8
// sub_8030948
// sub_8030958
// sub_8030988
// sub_8030998
// sub_80309BC
// sub_8030A04
// sub_8030A14
// sub_8030A30
// sub_8030A5C
// sub_8030A90
// sub_8030AB8
// sub_8030B60
// sub_8030B74
// sub_8030B88
// sub_8030C68
// sub_8030C88
// sub_8030CB0
// sub_8030CCC
// sub_8030CEC
// sub_8030D08
// sub_8030D88
// sub_8030DFC
// sub_8030E48
// sub_8030E80
// sub_80310FC
// sub_8031114
// sub_8031198
// sub_80312E8
// sub_8031318
// sub_80313A0
// sub_80313B8
// sub_80313D4
// sub_80313E8
// sub_8031440
// sub_803157C
// sub_8031594
// sub_8031610
// sub_8031634
// sub_8031648
// sub_8031664
// sub_80316C8
// sub_8031740
// sub_8031758
// sub_80317EC
// sub_803186C
// sub_80318B4
// sub_80318D0
// sub_80318EC
// sub_803192C
// sub_8031958
// sub_8031994
// GetROMChapterStruct
// GetChapterMapPointer
// sub_8031AC0
// GetChapterEventInfo
// sub_8031B1C
// sub_8031B40
// sub_8031B54
// sub_8031B6C
// sub_8031BF8
// sub_8031C24
// sub_8031C6C
// sub_8031D9C
// sub_8031DC4
// sub_8031E18
// sub_8031E58
// sub_8031E8C
// sub_8031EC0
// sub_8031EF4
// sub_8031F4C
// sub_8031F80
// sub_8031FAC
// sub_8031FD0
// sub_80320D8
// sub_80321EC
// sub_803232C
// sub_8032340
// sub_803238C
// sub_80323AC
// sub_8032420
// sub_8032434
// sub_803248C
// sub_80324AC
// sub_803252C
// sub_803255C
// sub_8032594
// sub_803264C
// sub_8032710
// sub_8032748
// sub_803280C
// InitSubtitleHelpText
// sub_803293C
// sub_80329A0
// sub_80329BC
// sub_80329D4
// sub_8032A00
// sub_8032A20
// sub_8032A44
// StartSubtitleHelp
// sub_8032AD0
// sub_8032B4C
// sub_8032C40
// sub_8032CA0
// sub_8032CCC
// sub_8032CDC
// sub_8032CF4
// sub_8032D2C
// sub_8032D68
// BeginUnitHealAnim
// sub_8032DD0
// sub_8032E34
// sub_8032EA0
// sub_8032EF8
// sub_8032F90
// sub_8032FF8
// sub_8033030
// sub_80330DC
// sub_8033134
// sub_8033148
// sub_803315C
// sub_8033170
// sub_80331C8
// sub_8033224
// sub_8033254
// sub_8033280
// sub_80332AC
// StartStatusHealEffect
// TerrainHealDisplay_Init
// MassEffectDisplay_Check
// MassEffectDisplay_Watch
// TerrainHealDisplay_Display
// FinishDamageDisplay
// TerrainHealDisplay_Next
// PoisonDamageDisplay_Init
// sub_8033518
// sub_8033544
// sub_80335B4
// sub_80335D8
// sub_8033624
// sub_8033648
// sub_8033650
// sub_80336E0
// sub_8033710
// sub_8033820
// sub_8033884
// sub_80338B8
// sub_8033940
// sub_803397C
// sub_80339C0
// sub_8033A04
// sub_8033A38
// DrawBattleForecastContentsStandard
// sub_8033D60
// sub_8033FAC
// sub_8033FE8
// sub_8034020
// sub_8034070
// sub_8034100
// sub_8034110
// sub_803418C
// sub_8034230
// sub_80342CC
// sub_8034340
// sub_80343AC
// sub_80343F0
// sub_80344D4
// sub_80345B8
// sub_80345D4
// sub_803463C
// sub_8034664
// sub_80346A0
// sub_803471C
// sub_8034740
// sub_8034770
// sub_80347A0
// sub_80347BC
// sub_80347D4
// sub_80347EC
// sub_803484C
// sub_8034894
// sub_803490C
// sub_80349F8
// sub_8034A50
// sub_8034A74
// sub_8034AB4
// sub_8034AC4
// sub_8034B70
// GetBallistaItemAt
// sub_8034BE8
// sub_8034C18
// sub_8034C48
// sub_8034C80
// sub_8034CBC
// sub_8034CD0
// sub_8034CF8
// sub_8034D14
// sub_8034D34
// sub_8034D3C
// GetCurrentPromotedLevelBonus
// sub_8034D5C


// sub_806BFD0
// sub_806BFE4
// sub_806C044
// sub_806C064
// sub_806C0C8
// sub_806C0D4
// sub_806C0E8
// sub_806C114
// sub_806C178
// sub_806C1A4
// GetWeaponAnimActorCount
// sub_806C1E8
// GetWeaponAnimManimSpecialScr
// sub_806C208
// sub_806C218
// sub_806C228

/*mu.h */

// sub_806E630
// sub_806E678
// sub_806E698
// sub_806E6DC
// sub_806E730
// sub_806E76C
// sub_806E7EC
// sub_806E840
// sub_806E8DC
// sub_806E930
// sub_806E94C
// sub_806E974
// sub_806EA0C
// sub_806EA64
// sub_806EAA4
// Manim_StoleItemPopup
// Manim_WeaponBrokePopup
// ManimShouldBuDisplayWeaponBroke
// Manim_WeaponLevelGainedPopup
// ManimShouldBuDisplayWeaponLevelGained
// Manim_PrepareBattleTalk
// Manim_Finish
// sub_806EC98
// sub_806ED78
// sub_806EDC0
// sub_806EDE0
// sub_806EE30
// sub_806EE5C
// sub_806EE9C
// sub_806EF3C
// sub_806EFB0
// sub_806F0C4
// sub_806F280
// sub_806F2C8
// sub_806F2D8
// sub_806F30C
// InitManimActor
// sub_806F404
// InitManimActorFacings
// sub_806F598
// sub_806F7B0
// sub_806F83C
// sub_806F8C8
// sub_806F97C
// StartBattleManim
// InitManimHits
// InitManimActors
// GetFacingFromTo
// UnpackManimWindowDigits
// PutManimWindowNumber
// UnpackManimWindowGraphics
// PutManimWindowBarTile
// PutManimWindowBar
// EndManimInfoWindow
// StartManimInfoWindow
// ManimWindow_Clear
// sub_806FFE8
// sub_80700FC
// sub_8070258
// sub_8070338
// sub_8070390
// sub_8070534
// sub_8070620
// sub_8070704
// sub_8070774
// sub_8070828
// sub_8070858
// sub_80708F8
// sub_80709E8
// sub_8070AC4
// sub_8070AF8
// sub_8070B10
// sub_8070F70
// sub_807116C
// sub_807134C
// sub_8071874
// sub_8071960
// sub_8071BD8
// sub_8071C10
// sub_8071C8C
// sub_8071D08
// sub_8071D9C
// sub_8071DF8
// sub_8071E68
// sub_8071ECC
// sub_8071F3C
// sub_8072074
// sub_80721A4
// sub_80721C8
// sub_807224C
// sub_8072320
// sub_8072374
// sub_8072398
// sub_80723BC
// sub_807245C
// sub_8072514
// sub_807255C
// sub_8072638
// sub_80726B8
// sub_80727BC
// sub_8072884
// sub_80728F0
// sub_8072910
// sub_807296C
// sub_8072AAC
// sub_8072C10
// sub_8072D74
// sub_8072E0C
// sub_8072EAC
// sub_8072F18
// sub_8072F70
// sub_8073084
// sub_80730DC
// sub_8073204
// sub_80732FC
// sub_80733F8
// sub_807340C
// sub_807347C
// sub_80734FC
// sub_8073568
// sub_8073584
// sub_8073648
// sub_80736EC
// sub_80737AC
// sub_807384C
// sub_80738B4
// sub_80738E0
// sub_8073984
// sub_80739EC
// sub_8073A58
// sub_8073A98
// sub_8073AD4
// sub_8073B40
// sub_8073C24
// sub_8073CB0
// sub_8073D3C
// sub_8073DA4
// sub_8073ED8
// sub_8073FC4
// sub_8074064
// sub_80740CC
// sub_807419C
// sub_8074240
// sub_80742A8
// sub_80742DC
// sub_8074300
// sub_807443C
// sub_80744F8
// sub_807456C
// sub_80746E0
// sub_807475C
// sub_8074774
// sub_80747F4
// sub_8074968
// sub_80749F0
// sub_8074B68
// sub_8074C5C
// sub_8074C70
// sub_8074D38
// sub_8074D50
// sub_8074F40
// sub_8075098
// sub_80750CC
// sub_80751F0
// sub_8075224
// sub_80753F4
// sub_807540C
// sub_807549C
// sub_8075510
// sub_8075584
// sub_80756D0
// sub_80756F0
// sub_8075864
// sub_8075878
// sub_8075898
// sub_80758AC
// sub_80758E4
// sub_8075938
// sub_8075970
// sub_80759B0
// sub_80759C8
// sub_80759E8
// sub_8075A98
// sub_8075AC4
// sub_8075B1C
// sub_8075B7C
// sub_8075C18
// sub_8075CF8
// sub_8075DB0
// sub_8075DDC
// sub_8075E08
// sub_8075E34
// sub_8075E68
// sub_8075E9C
// sub_8075F68
// sub_8075FAC
// sub_8075FF0
// sub_807604C
// sub_8076080
// sub_8076164
// sub_8076248
// sub_80762CC
// sub_8076350
// sub_80763A0
// sub_80763F0
// sub_8076460
// sub_8076820
// sub_80768F4
// sub_8076920
// sub_8076950
// sub_8076980
// sub_80769B0
// sub_80769E0
// sub_8076A1C
// sub_8076A58
// sub_8076A94
// sub_8076AD0
// sub_8076B0C
// sub_8076B48
// sub_8076B84
// sub_8076C40
// sub_8076C80
// sub_8076CB0
// sub_8076CD8
// sub_8076D08
// sub_8076D38
// sub_8076D68
// sub_8076D98
// sub_8076DCC
// sub_8076E00
// sub_8076E34
// sub_8076EA8
// sub_8076F34
// sub_8076F68
// sub_8076FFC
// sub_8077014
// InitScanlineEffect
// sub_807706C
// sub_807719C
// sub_80771D0
// sub_80771E0
// sub_8077248
// sub_80772CC
// sub_8077350
// sub_80773B8
// sub_8077420
// sub_807755C
// sub_807761C
// sub_8077694
// sub_8077714
// sub_8077794
// sub_807781C
// SwapScanlineBufs
// sub_80778C0
// sub_80778FC
// sub_8077944
// sub_807798C
// sub_8077A70
// sub_8077BC0
// sub_8077BE0
// sub_8077C1C
// sub_8077CEC
// sub_8077D1C
// sub_8077E1C
// sub_8077E50
// sub_8077FB4
// sub_8078030
// sub_8078098
// sub_80780E0
// sub_8078130
// sub_80781C8
// sub_80782AC
// sub_8078344
// sub_80783DC
// sub_8078474
// QuintessenceFx_OnHBlank
// sub_80785B8
// sub_8078688
// sub_8078894
// sub_80788D0
// sub_80788F0
// sub_80788FC
// sub_8078950
// sub_8078980
// sub_8078984
// sub_80789AC
// sub_80789EC
// sub_8078A8C
// sub_8078ACC
// sub_8078BC4
// sub_8078C48
// sub_8078C90
// sub_8078CDC
// sub_8078CF0
// sub_8078D3C
// sub_8078D80
// sub_8078DC4
// sub_8078E20
// sub_8078E84
// sub_8078EB0
// sub_8078EDC
// sub_8078F08
// sub_8078F30
// sub_8078F64
// sub_8078FC4
// sub_8078FF0
// sub_8079040
// sub_8079058
// sub_8079080
// sub_80790A8
// sub_80790D0
// sub_80790F8
