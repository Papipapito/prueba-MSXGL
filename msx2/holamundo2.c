// ============================================================
// holamundo2.c — MSX2, MSX-DOS 1, Screen 0, COLOR
// Limpia la pantalla con fondo azul, texto amarillo y muestra
// "HOLA MUNDO" centrado con marco decorativo.
// ============================================================
#include "msxgl.h"
#include "dos.h"

// Fuente de texto MSXgl
#include "font/font_mgl_sample6.h"

// Screen 0: 40 columnas x 24 filas
#define COLS      40
#define ROWS      24
#define MSG       "HOLA MUNDO"
#define MSG_LEN   10
#define COL_C     ((COLS - MSG_LEN) / 2)   // = 15
#define ROW_C     (ROWS / 2 - 1)            // = 11

// Colores MSX2
#define COLOR_FG   COLOR_LIGHT_YELLOW   // texto  = amarillo
#define COLOR_BG   COLOR_DARK_BLUE      // fondo  = azul oscuro
#define COLOR_DIM  COLOR_GRAY           // marco  = gris

// Dibuja una linea horizontal de 'chr' en la fila 'row'
static void DrawLine(u8 row, c8 chr)
{
	u8 i;
	Print_SetPosition(0, row);
	for (i = 0; i < COLS; i++)
		Print_DrawChar(chr);
}

// Imprime un texto centrado en la fila 'row'
static void PrintCentered(u8 row, const c8* str, u8 len)
{
	Print_SetPosition((COLS - len) / 2, row);
	Print_DrawText(str);
}

void main()
{
	// --- Inicializar VDP en Screen 0 ---
	VDP_SetMode(VDP_MODE_SCREEN0);
	VDP_EnableVBlank(TRUE);
	VDP_ClearVRAM();

	// Colores globales: amarillo sobre azul oscuro
	// VDP_SetColor2(bg, fg) — backdrop + registro 7
	VDP_SetColor2(COLOR_BG, COLOR_FG);

	// Fuente y color de texto
	Print_SetTextFont(g_Font_MGL_Sample6, 1);
	Print_SetColor(COLOR_FG, COLOR_BG);

	// --- Marco superior ---
	DrawLine(0, '=');

	// --- Titulo en fila 2 ---
	PrintCentered(2, "** PRUEBA MSXgl **", 18);

	// --- Linea separadora ---
	DrawLine(4, '-');

	// --- HOLA MUNDO centrado ---
	Print_SetPosition(COL_C, ROW_C);
	Print_DrawText(MSG);

	// --- Linea separadora inferior ---
	DrawLine(ROWS - 3, '-');

	// --- Instruccion en ultima fila ---
	PrintCentered(ROWS - 1, "Pulsa una tecla...", 18);

	// --- Marco inferior ---
	DrawLine(ROWS - 2, '=');

	// Esperar tecla via BDOS (no necesita interrupcion VBlank)
	DOS_CharInput();

	// Salir a MSX-DOS
	DOS_Exit0();
}
