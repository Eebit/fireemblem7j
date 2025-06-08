#pragma once

#include "global.h"

enum
{
    CG_TEXT_FLAG_0 = (1 << 0),
    CG_TEXT_FLAG_1 = (1 << 1),
    CG_TEXT_FLAG_2 = (1 << 2), // Blocks parent proc after end of string [X]
    CG_TEXT_FLAG_3 = (1 << 3), // Fill text area with 0 after [2NL]
    CG_TEXT_FLAG_4 = (1 << 4), // Disable sound?
    CG_TEXT_FLAG_5 = (1 << 5), // Instantly show all text
    CG_TEXT_FLAG_6 = (1 << 6), // Prevent skipping?
    CG_TEXT_FLAG_7 = (1 << 7),
    CG_TEXT_FLAG_8 = (1 << 8),
    CG_TEXT_FLAG_9 = (1 << 9), // If set, use "Ask/Exit" when using [Yes] or [No] ("Yes/No" if unset)
    CG_TEXT_FLAG_10 = (1 << 10),
    // (1 << 11) // used for text speed?
    // (1 << 12) // used for text speed?
    // (1 << 13) // used for text speed?
    // (1 << 14) // used for BGs
    // (1 << 15) // used for BGs
    CG_TEXT_FLAG_16 = (1 << 16), // Set when using [SetName]
    CG_TEXT_FLAG_17 = (1 << 17), // Face fade out
    CG_TEXT_FLAG_18 = (1 << 18), // Talk bubble tail "kind"; 5 if set, 2 or 3 if unset (depending on flag 1)
    CG_TEXT_FLAG_19 = (1 << 19), // Run HBlank
    // (1 << 20)
    // (1 << 21)
};

#define CG_TEXT_BG(bg) (((bg) & 3) << 14)
#define CG_TEXT_BG_MASK CG_TEXT_BG(-1)
#define GetCgTextBg(flags) (((flags) & CG_TEXT_BG_MASK) >> 14)

void SetCgTextFlags(int flags);
// SetCgTextFlag
// ClearCgTextFlag
// GetCgTextFlags
// SetCgTextBlendControl
// GetCgTextBlendControl
// sub_8087EC8
// sub_8087EE0
// sub_8087EEC
// sub_8087F60
// sub_8088024
// sub_80883C0
// sub_80883C8
// sub_8088404
// sub_8088464
// sub_80884A8
// sub_80884E0
// sub_8088520
// sub_8088548
void StartCgText(int x, int y, int width, int height, int msg_id, void * vram, int pal, ProcPtr parent);
void EndCgText(void);
bool sub_80886E0(void);
// sub_80886FC
// sub_8088718
// sub_8088768
// sub_80887B4
// sub_8088834
// sub_8088884
// sub_8088A20
// sub_8088C78
// sub_8088D08
// sub_808929C
// sub_8089308
// sub_8089310
// sub_8089394
// sub_80893BC
// sub_80893E0
