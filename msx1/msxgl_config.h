// ============================================================
// msxgl_config.h — configuracion minima para holamundo DOS
// Solo necesitamos el modulo DOS (sin VDP, sin Print, sin input)
// ============================================================
#pragma once

//-----------------------------------------------------------------------------
// BIOS
//-----------------------------------------------------------------------------
#define BIOS_CALL_MAINROM          BIOS_CALL_DIRECT
#define BIOS_USE_MAINROM           TRUE
#define BIOS_USE_VDP               FALSE
#define BIOS_USE_PSG               FALSE
#define BIOS_USE_SUBROM            FALSE
#define BIOS_USE_DISKROM           FALSE

//-----------------------------------------------------------------------------
// VDP — no se usa
//-----------------------------------------------------------------------------
#define VDP_VRAM_ADDR              VDP_VRAM_ADDR_14
#define VDP_UNIT                   VDP_UNIT_U8
#define VDP_USE_MODE_T1            FALSE
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
// PRINT — no se usa
//-----------------------------------------------------------------------------
#define PRINT_USE_TEXT             FALSE
#define PRINT_USE_VALIDATOR        FALSE

//-----------------------------------------------------------------------------
// INPUT — necesario para que bios.h compile KEY_ROW/KEY_IDX
//-----------------------------------------------------------------------------
#define INPUT_USE_KEYBOARD         TRUE
#define INPUT_USE_JOYSTICK         FALSE
#define INPUT_USE_MANAGER          FALSE
#define INPUT_JOY_UPDATE           FALSE
#define INPUT_KB_UPDATE            FALSE
#define INPUT_KB_UPDATE_MIN        0
#define INPUT_KB_UPDATE_MAX        0

//-----------------------------------------------------------------------------
// MEMORY — no se usa mapper
//-----------------------------------------------------------------------------
#define MEMORY_USE_MAPPER          FALSE
