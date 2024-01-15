	.section .data

    .incbin "FireEmblem7J.base.gba", 0xDAD284, 0xDB8ED8 - 0xDAD284

	.global ProcScr_TitleScreen
ProcScr_TitleScreen: @ 0xDB8ED8
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word Title_Init
        @ PROC_CALL
        .short 0x2, 0x0
        .word Title_SetupMainGraphics
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_08014714
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_GOTO
        .short 0xc, 0x1
        .word 0x0
        @ PROC_LABEL
        .short 0xb, 0x0
        .word 0x0
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB210
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_080BB29C
        @ PROC_WHILE
        .short 0x14, 0x0
        .word sub_080AB5E0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB3EC
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_080BB46C
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB510
        @ PROC_LABEL
        .short 0xb, 0x1
        .word 0x0
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word Title_IDLE
        @ PROC_LABEL
        .short 0xb, 0x2
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_08014690
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB5B0
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0

	.incbin "FireEmblem7J.base.gba", 0xDB8F80, 0x1000000 - 0xDB8F80