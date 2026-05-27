// ============================================================
// project_config.js — holamundo2, MSX2 con color
// Compilar: node ../../engine/script/js/build.js
// ============================================================

DoClean   = false;
DoCompile = true;
DoMake    = true;
DoPackage = true;
DoDeploy  = false;
DoRun     = false;

ProjName    = "holamundo2";
ProjModules = [ ProjName ];
LibModules  = [ "system", "bios", "memory", "vdp", "print", "dos" ];

Machine = "2";      // MSX2 (V9938, colores extendidos)
Target  = "DOS1";   // .COM bajo MSX-DOS 1

AppSignature = false;
Verbose      = true;
