// ============================================================
// holamundo.c — MSX-DOS .COM con MSXgl
// Limpia la pantalla (Screen 0, 40x24) y muestra
// "HOLA MUNDO" completamente centrado.
//
// Posicionado con CR+LF y espacios (sin VT52, compatible DOS1)
// Salida caracter a caracter con DOS_CharOutput (sin BDOS fn.9)
// ============================================================
#include "msxgl.h"
#include "dos.h"

// Screen 0 por defecto en MSX-DOS: 40 columnas x 24 filas
#define COLS     40
#define ROWS     24
#define MSG      "HOLA MUNDO"
#define MSG_LEN  10

// Filas a bajar desde arriba: ROWS/2 - 1 = 11
// Espacios a la derecha:      (COLS - MSG_LEN) / 2 = 15
#define ROW_CENTER  (ROWS / 2 - 1)
#define COL_CENTER  ((COLS - MSG_LEN) / 2)

void main()
{
	u8 i;
	const c8* p;

	// Limpiar pantalla (BDOS fn.2 con form-feed)
	DOS_ClearScreen();

	// Bajar ROW_CENTER filas con CR+LF
	for (i = 0; i < ROW_CENTER; i++)
	{
		DOS_CharOutput('\r');
		DOS_CharOutput('\n');
	}

	// Avanzar COL_CENTER columnas con espacios
	for (i = 0; i < COL_CENTER; i++)
	{
		DOS_CharOutput(' ');
	}

	// Imprimir "HOLA MUNDO" caracter a caracter
	for (p = MSG; *p != 0; p++)
	{
		DOS_CharOutput(*p);
	}

	// Esperar cualquier tecla antes de volver al DOS
	DOS_CharInput();

	// Salir limpiamente a MSX-DOS
	DOS_Exit0();
}
