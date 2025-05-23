#pragma once

#include "global.h"
#include "proc.h"

#define FACE_SLOT_COUNT 4
#define FID_FACTION_CHIBI 0x7F00

struct FaceInfo {
    /* 00 */ void const * img;
    /* 04 */ void const * img_chibi;
    /* 08 */ u16 const * pal;
    /* 0C */ void const * img_mouth;
    /* 10 */ void const * img_card;
    /* 14 */ u8 x_mouth, y_mouth;
    /* 16 */ u8 x_eyes, y_eyes;
    /* 18 */ u8 blink_type;
};

extern struct FaceInfo FaceInfoTable[];

struct FaceVramEnt {
    /* 00 */ u32 chr_off;
    /* 04 */ u16 palid;
};

extern struct FaceVramEnt EWRAM_DATA gFaceConfig[FACE_SLOT_COUNT];

struct FaceMouthProc;
struct FaceEyeProc;

struct FaceProc {
    /* 00 */ PROC_HEADER;

    /* 2C */ const struct FaceInfo * info;
    /* 30 */ u32 disp;
    /* 34 */ s16 x_disp;
    /* 36 */ s16 y_disp;

    /* 38 */ u16 const * sprite;

    /* 3C */ u16 oam2;
    /* 3E */ u16 fid;
    /* 40 */ u8 slot;
    /* 41 */ u8 sprite_layer;

    /* 44 */ struct FaceMouthProc * mouth_proc;
    /* 48 */ struct FaceEyeProc   * eye_proc;
};

extern struct FaceProc * gFaces[FACE_SLOT_COUNT];

enum {
    FACE_64x80,
    FACE_64x80_FLIPPED,
    FACE_96x80,
    FACE_96x80_FLIPPED,
    FACE_64x72,
    FACE_64x72_FLIPPED,

    FACE_96x72 = 0x800,
    FACE_96x72_FLIPPED = 0x801,
};

enum {
    FACE_HLAYER_DEFAULT,

    // why shifts?
    FACE_HLAYER_0 = 1 << 0,
    FACE_HLAYER_1 = 1 << 1,
    FACE_HLAYER_2 = 1 << 2,
    FACE_HLAYER_3 = 1 << 3,
};

#define FACE_DISP_FLIPPED (1 << 0)
#define FACE_DISP_KIND(kind) ((kind) & 807)
#define FACE_DISP_KIND_MASK FACE_DISP_KIND(-1)
#define FACE_DISP_SMILE (1 << 3)
#define FACE_DISP_TALK_1 (1 << 4)
#define FACE_DISP_TALK_2 (1 << 5)
#define FACE_DISP_HLAYER(layer) (((layer) & 0xF) << 6)
#define FACE_DISP_HLAYER_MASK FACE_DISP_HLAYER(-1)
#define FACE_DISP_BLEND (1 << 10)
#define FACE_DISP_BIT_12 (1 << 12)
#define FACE_DISP_BIT_13 (1 << 13)
#define FACE_DISP_BIT_14 (1 << 14)

struct FaceInfo const * GetFaceInfo(int fid);
void InitFaces(void);
void SetFaceConfig(struct FaceVramEnt const * config);
int GetFreeFaceSlot(void);
void Face_OnInit(struct FaceProc * proc);
void Face_OnIdle(struct FaceProc * proc);
struct FaceProc * StartFaceAuto(int fid, int x, int y, int disp);
struct FaceProc * StartFace(int slot, int fid, int x, int y, int disp);
void EndFace(struct FaceProc * proc);
void EndFaceById(int slot);
u32 SetFaceDisp(struct FaceProc * proc, u32 disp);
u32 SetFaceDispById(int slot, u32 disp);
u32 GetFaceDisp(struct FaceProc * proc);
u32 GetFaceDispById(int slot);
void FaceRefreshSprite(struct FaceProc * proc);
void PutFaceTm(u16 * tm, u8 const * data, int tileref, bool is_flipped);
void UnpackFaceChibiGraphics(int fid, int chr, int pal);
void PutFaceChibi(int fid, u16 * tm, int chr, int pal, bool is_flipped);
void UnpackFaceChibiSprGraphics(int fid, int chr, int pal);
void FaceChibiSpr_OnIdle(struct FaceProc * proc);
void StartFaceChibiStr(int x, int y, int fid, int chr, int pal, bool is_flipped, ProcPtr parent);
void EndFaceChibiSpr(void);
void PutFace80x72_Standard(u16 * tm, int tileref, const struct FaceInfo * info);
void PutFace80x72_Raised(u16 * tm, int tileref, const struct FaceInfo * info);
bool ShouldFaceBeRaised(int fid);
void PutFace80x72_Core(u16 * tm, int fid, int chr, int pal);

struct FaceEyeProc {
    /* 00 */ PROC_HEADER;

    /* 2C */ struct FaceProc * face_proc;

    /* 30 */ s16 blink;
    /* 32 */ s16 state; /* a finite state machine */
    /* 34 */ s16 timer;

    /* 38 */ int dealy;
    /* 3C */ u16 * tm;

    /* 40 */ u16 tileId;
    /* 42 */ u16 palId;
    /* 44 */ u16 faceId;
};

enum face_eye_proc_state_idx {
    FACE_EYE_INIT = 0,
    FACE_EYE_PRE_SWITCH = 1,

    FACE_EYE_FRAME0_DISP = 2,
    FACE_EYE_FRAME1_DISP = 3,
    FACE_EYE_FRAME_FLIP_DISP = 4,

    FACE_EYE_END = 97,
};

void BgFaceEyeBlink_Init(struct FaceEyeProc * proc);
void BgFaceEyeBlink_Delay(struct FaceEyeProc * proc);
void BgFaceEyeBlink_PutFace(struct FaceEyeProc * proc);
void PutFace80x72(ProcPtr proc, u16 * tm, int fid, int chr, int pal);
void EndFacePtr(struct Proc * proc);
void EndFaceIn8Frames(struct FaceProc * proc);
void StartFaceFadeIn(struct FaceProc * proc);
void StartFaceFadeOut(struct FaceProc * proc);
const u8 * GetFactionFaceImg(int);
void ApplyFactionFacePal(int, int);

struct FaceMouthProc {
    /* 00 */ PROC_HEADER;

    /* 2C */ struct FaceProc * face_proc;
    /* 30 */ s16 frame;
    /* 32 */ s16 timer;
};

void FaceMouth_Init(struct FaceMouthProc * proc);
void FaceMouth_Loop(struct FaceMouthProc * proc);

enum face_eye_frame_idx {
    FACE_EYE_FRAME_0 = 0,
    FACE_EYE_FRAME_1,
};

void PutFaceEyeSprite(struct FaceEyeProc * proc, int frame_idx);

void FaceEye_Init(struct FaceEyeProc * proc);
void FaceEye_Delay(struct FaceEyeProc * proc);
void FaceEye_PreSwitch(struct FaceEyeProc * proc);
void FaceEye_InitDisplayFrame0(struct FaceEyeProc * proc);
void FaceEye_DisplayFrame0(struct FaceEyeProc * proc);
void FaceEye_InitDisplayFrame1(struct FaceEyeProc * proc);
void FaceEye_DisplayFrame1(struct FaceEyeProc * proc);
void FaceEye_InitDisplayFrameFlip(struct FaceEyeProc * proc);
void FaceEye_DisplayFrameFlip(struct FaceEyeProc * proc);
void SetFaceBlinkControl(struct FaceProc * proc, int blink);
void SetFaceBlinkControlById(int slot, int blink);
int GetFaceBlinkInterval(struct FaceEyeProc * proc);
void SetFaceEyeState(struct FaceProc * proc, int state);
void SetFaceEyeStateById(int slot, int state);
// Face_0800798C
// sub_8007A00
struct FaceProc * StartBmFace(int slot, int fid, int x, int y, int disp);
// sub_8007B80

struct UnkFaceProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct FaceProc * face_proc;
    /* 30 */ const struct FaceInfo * face_info;
    /* 34 */ int fid;
};

// sub_8007B94
// sub_8007BB8
// sub_8007C10
void sub_8007C48(struct FaceProc * parent, int face_id);
// sub_8007C64

extern struct FaceVramEnt CONST_DATA DefaultFaceConfig[FACE_SLOT_COUNT];
extern u16 CONST_DATA Sprite_Face64x80[];
extern u16 CONST_DATA Sprite_Face64x80_Flipped[];
extern u16 CONST_DATA Sprite_Face96x80[];
extern u16 CONST_DATA Sprite_Face96x80_Flipped[];
extern u16 CONST_DATA Sprite_Face64x72[];
extern u16 CONST_DATA Sprite_Face64x72_Flipped[];
extern u16 CONST_DATA Sprite_Face96x72[];
extern u16 CONST_DATA Sprite_Face96x72_Flipped[];
extern CONST_DATA struct ProcCmd ProcScr_Face[];
extern CONST_DATA struct ProcCmd ProcScr_BmFace[];
extern u8 CONST_DATA FaceTm_Chibi[];
extern CONST_DATA struct ProcCmd ProcScr_FaceChibiSpr[];
extern u16 CONST_DATA Sprite_FaceChibi[];
extern u16 CONST_DATA Sprite_FaceChibi_Flipped[];
extern CONST_DATA struct ProcCmd ProcScr_BgFaceEyeBlink[];
extern CONST_DATA struct ProcCmd ProcScr_FaceEndIn8Frames[];
extern CONST_DATA struct ProcCmd ProcScr_FaceMouth[];
extern CONST_DATA struct ProcCmd ProcScr_FaceEye[];
// ??? gUnk_08BFFB20

extern const u8 Img_FactionMiniCard[];
extern const u16 Pal_FactionMiniCard[];
