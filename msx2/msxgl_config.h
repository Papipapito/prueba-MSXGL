// ============================================================
// msxgl_config.h — holamundo2, MSX2 con VDP + Print
// ============================================================
#pragma once

//-----------------------------------------------------------------------------
// BIOS
//-----------------------------------------------------------------------------
#define BIOS_CALL_MAINROM          BIOS_CALL_DIRECT
#define BIOS_CALL_SUBROM           BIOS_CALL_INTERSLOT
#define BIOS_CALL_DISKROM          BIOS_CALL_INTERSLOT
#define BIOS_USE_MAINROM           TRUE
#define BIOS_USE_VDP               TRUE
#define BIOS_USE_PSG               FALSE
#define BIOS_USE_SUBROM            FALSE
#define BIOS_USE_DISKROM           FALSE

//-----------------------------------------------------------------------------
// VDP — MSX2, solo Screen 0 (T1, 40 cols)
//-----------------------------------------------------------------------------
#define VDP_VRAM_ADDR              VDP_VRAM_ADDR_17   // 128KB VRAM MSX2
#define VDP_UNIT                   VDP_UNIT_U8
#define VDP_INIT_50HZ              VDP_INIT_OFF

#define VDP_USE_MODE_T1            TRUE
#define VDP_USE_MODE_T2            FALSE
#define VDP_USE_MODE_G1            FALSE
#define VDP_USE_MODE_G2            FALSE
#define VDP_USE_MODE_MC            FALSE
#define VDP_USE_MODE_G3            FALSE
#define VDP_USE_MODE_G4            FALSE
#define VDP_USE_MODE_G5            FALSE
#define VDP_USE_MODE_G6            FALSE
#define VDP_USE_MODE_G7            FALSE

#define VDP_USE_VRAM16K            FALSE
#define VDP_USE_SPRITE             FALSE
#define VDP_USE_COMMAND            FALSE
#define VDP_USE_CUSTOM_CMD         FALSE
#define VDP_AUTO_INIT              FALSE
#define VDP_USE_UNDOCUMENTED       FALSE
#define VDP_USE_VALIDATOR          FALSE

//-----------------------------------------------------------------------------
// PRINT — modo texto con fuente
//-----------------------------------------------------------------------------
#define PRINT_USE_TEXT             TRUE
#define PRINT_USE_VALIDATOR        FALSE

//-----------------------------------------------------------------------------
// INPUT — necesario para que bios.h compile correctamente
//-----------------------------------------------------------------------------
#define INPUT_USE_KEYBOARD         TRUE
#define INPUT_USE_JOYSTICK         FALSE
#define INPUT_USE_MANAGER          FALSE
#define INPUT_JOY_UPDATE           FALSE
#define INPUT_KB_UPDATE            FALSE
#define INPUT_KB_UPDATE_MIN        0
#define INPUT_KB_UPDATE_MAX        0

//-----------------------------------------------------------------------------
// MEMORY
//-----------------------------------------------------------------------------
#define MEMORY_USE_MAPPER          FALSE

//-----------------------------------------------------------------------------
// DOS
//-----------------------------------------------------------------------------
#define DOS_USE_FCB                FALSE
#define DOS_USE_HANDLE             FALSE
#define DOS_USE_UTILITIES          FALSE
#define DOS_USE_VALIDATOR          FALSE
#define DOS_USE_ERROR_HANDLER      FALSE
#define DOS_USE_BIOSCALL           FALSE
