	.section .data

	.global ProcScr_DragonGatefx
ProcScr_DragonGatefx:	@ 0x08D6F854
        @ PROC_SET_END_CB
        .short 0x4, 0x0
        .word DragonGatefx_End
        @ PROC_CALL
        .short 0x2, 0x0
        .word DragonGatefx_DrawLight
        @ PROC_BLOCK
        .short 0x10, 0x0
        .word 0x0
        @ PROC_LABEL
        .short 0xb, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word DragonGatefx_DrawDragon
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word DragonGatefx_MergeDragon
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807BB48
        @ PROC_SLEEP
        .short 0xe, 0x1
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word DragonGatefxSetHBlank
        @ PROC_BLOCK
        .short 0x10, 0x0
        .word 0x0
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0

	.global ProcScr_DragonSpriteBlinking
ProcScr_DragonSpriteBlinking:	@ 0x08D6F8AC
        @ PROC_CALL
        .short 0x2, 0x0
        .word DragonSpriteBlinking_Init
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word DragonSpriteBlinking_Loop

		@ no end?

	.global gUnk_08D6F8BC
gUnk_08D6F8BC:	@ 0x08D6F8BC
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807BDFC
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_807BF08
        @ PROC_BLOCK
        .short 0x10, 0x0
        .word 0x0
        @ PROC_LABEL
        .short 0xb, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word TryLockParentProc
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807BF5C
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_807BF9C
        @ PROC_WHILE
        .short 0x14, 0x0
        .word CheckBmBgfxDone
        @ PROC_WHILE
        .short 0x14, 0x0
        .word sub_8013F3C
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807C170
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807BFEC
        @ PROC_WHILE
        .short 0x14, 0x0
        .word sub_8013F3C
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_807C108
        @ PROC_WHILE
        .short 0x14, 0x0
        .word sub_8013F3C
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_807C170
        @ PROC_CALL
        .short 0x2, 0x0
        .word TryUnlockParentProc
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0

	.global gUnk_08D6F95C
gUnk_08D6F95C:	@ 0x08D6F95C
	.incbin "FireEmblem7J.base.gba", 0xD6F95C, 0xD6F9D4 - 0xD6F95C

	.global gUnk_08D6F9D4
gUnk_08D6F9D4:	@ 0x08D6F9D4
	.incbin "FireEmblem7J.base.gba", 0xD6F9D4, 0xD6FA14 - 0xD6F9D4
