#include "gbafe.h"

struct PrepProcA1962C
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 unk_29;
    /* 2C */ int unk_2c;
    /* 30 */ bool unk_30[4];
};

void sub_8099840(struct PrepProcA1962C * proc)
{
    StartCgText(10, 7, 17, 4, proc->unk_2c, (void *)0x06011000, -1, NULL);
    SetCgTextFlags(CG_TEXT_FLAG_2 | CG_TEXT_FLAG_3 | CG_TEXT_FLAG_4 | CG_TEXT_FLAG_5 | CG_TEXT_FLAG_6);
}

void FortuneSubMenu_Init_Null(void)
{
    return;
}

void nullsub_79(void)
{
    return;
}

void FortuneSubMenu_Unused_SetAvailableOptions(struct PrepProcA1962C * proc)
{
    proc->unk_30[0] = true;
    proc->unk_30[1] = sub_8099CB4();
    proc->unk_30[2] = sub_8099CF0();
    proc->unk_30[3] = true;
}

extern struct Text gUnk_020129A8[];
extern int gUnk_08D8D5F8[];
extern int gUnk_08D8D60C[];

void FortuneSubMenu_Unused_SetupText(struct PrepProcA1962C * proc)
{
    s32 i;
    struct Text * text = gUnk_020129A8;

    SetTextFontGlyphs(TEXT_GLYPHS_SYSTEM);
    SetTextFont(NULL);

    TmFillRect_thm(gBg0Tm + TM_OFFSET(0, 10), 31, 10, TILEREF(0x0, 0));

    for (i = 0; i < 4; i++)
    {
        ClearText(text);
        PutDrawText(
            text++, gBg0Tm + TM_OFFSET(4 + (i & 1) * 14, 10 + (i >> 1) * 2),
            proc->unk_30[i] ? TEXT_COLOR_SYSTEM_WHITE : TEXT_COLOR_SYSTEM_GRAY, 0, 0, DecodeMsg(gUnk_08D8D60C[i]));
    }

    text = gUnk_020129A8 + 29;

    ClearText(text);
    PutDrawText(text, gBg0Tm + TM_OFFSET(22, 0), TEXT_COLOR_SYSTEM_WHITE, 0, 0, DecodeMsg(gUnk_08D8D5F8[4]));

    EnableBgSync(BG0_SYNC_BIT);
}

bool sub_809997C(struct PrepProcA1962C * proc)
{
    int previous = proc->unk_29;

    if ((gpKeySt->repeated & DPAD_LEFT) && ((proc->unk_29 % 2) != 0))
        proc->unk_29--;

    if ((gpKeySt->repeated & DPAD_RIGHT) && ((proc->unk_29 % 2) == 0))
        proc->unk_29++;

    if ((gpKeySt->repeated & DPAD_DOWN) && ((proc->unk_29 / 2) == 0))
        proc->unk_29 += 2;

    if ((gpKeySt->repeated & DPAD_UP) && (proc->unk_29 / 2) != 0)
        proc->unk_29 -= 2;

    if (previous != proc->unk_29)
    {
        PlaySoundEffect(SONG_385);
        return true;
    }

    return false;
}

extern int gUnk_08D8D620[];

void sub_8099A20(struct PrepProcA1962C * proc)
{
    if (gpKeySt->pressed & A_BUTTON)
    {
        if (proc->unk_30[proc->unk_29] == true)
        {
            switch (proc->unk_29)
            {
                case 0:
                    Proc_Goto(proc, 2);
                    PlaySoundEffect(SONG_38A);
                    break;

                case 2:
                    Proc_Goto(proc, 3);
                    PlaySoundEffect(SONG_38A);
                    break;

                case 3:
                    Proc_Goto(proc, 4);
                    PlaySoundEffect(SONG_38A);
                    break;

                case 1:
                    Proc_Goto(proc, 5);
                    PlaySoundEffect(SONG_38A);
                    break;

                default:
                    PlaySoundEffect(SONG_38C);
                    break;
            }
        }
        else
        {
            PlaySoundEffect(SONG_38C);
        }
    }
    else if (gpKeySt->pressed & B_BUTTON)
    {
        Proc_Goto(proc, 6);
        PlaySoundEffect(SONG_38B);
    }
    else if (sub_809997C(proc))
    {
        ShowSysHandCursor(((1 & proc->unk_29) * 112) + 28, ((proc->unk_29 >> 1) * 16) + 80, 8, 0x800);
        proc->unk_2c = gUnk_08D8D620[proc->unk_29];
        sub_8099840(proc);
    }
}

void sub_8099B2C(ProcPtr proc)
{
    EndCgText();
    EndAllProcChildren(proc);
    EndMuralBackground_();
    EndFaceById(0);
    SetOnHBlankA(NULL);
}

void sub_8099B50(struct PrepProcA1962C * proc)
{
    switch (proc->unk_29)
    {
        case 0:
            Proc_Goto(proc, 2);
            return;
        case 2:
            Proc_Goto(proc, 3);
            return;
        case 3:
            Proc_Goto(proc, 4);
            return;
        case 1:
            Proc_Goto(proc, 5);
            return;
    }
}

extern struct ProcCmd ProcScr_FortuneSubMenu[];

void StartFortuneSubMenu(int var, struct PrepProcA1962C * proc)
{
    proc = Proc_StartBlocking(ProcScr_FortuneSubMenu, proc);
    proc->unk_29 = var;
    return;
}

bool sub_8099BB0(int var)
{
    switch (var)
    {
        case 2:
            return sub_8099CB4();
        case 3:
            return sub_8099CF0();
        case 0:
            return true;
        case 1:
            if (gPlaySt.tact_enabled)
                return true;
    }

    return false;
}

int GetChapterDivinationTextIdHectorStory(void)
{
    if (gPlaySt.chapterModeIndex != CHAPTER_MODE_HECTOR)
        return GetChapterInfo(gPlaySt.chapterIndex)->divinationTextIdInHectorStory;

    return GetChapterInfo(gPlaySt.chapterIndex)->divinationTextIdInEliwoodStory;
}

int GetChapterDivinationTextIdBeginning(void)
{
    return GetChapterInfo(gPlaySt.chapterIndex)->divinationTextIdBeginning;
}

int sub_8099C44(void)
{
    return GetChapterInfo(gPlaySt.chapterIndex)->divinationTextIdEnding;
}

int sub_8099C60(void)
{
    return GetChapterInfo(gPlaySt.chapterIndex)->divinationFee;
}

int GetChapterDivinationPortrait(void)
{
    return GetChapterInfo(gPlaySt.chapterIndex)->divinationPortrait;
}

bool sub_8099C98(void)
{
    if (GetChapterDivinationTextIdHectorStory() == 0)
        return false;

    if (GetChapterDivinationTextIdBeginning())
        return false;

    return true;
}

bool sub_8099CB4(void)
{
    if ((gPlaySt.chapterStateBits & PLAY_FLAG_HARD) || GetChapterDivinationTextIdHectorStory() == 0)
    {
        return false;
    }

    return true;
}

bool sub_8099CDC(void)
{
    if (GetChapterDivinationPortrait() == 0x41)
    {
        return true;
    }

    return false;
}

bool sub_8099CF0(void)
{
    return sub_8099CDC();
}

bool sub_80A0A74(void)
{
    if (gPlaySt.chapterIndex > CHAPTER_12)
    {
        return true;
    }

    return false;
}
