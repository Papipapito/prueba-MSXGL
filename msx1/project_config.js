// ============================================================
// project_config.js — holamundo para MSX-DOS 1
// Compilar: node ../../engine/script/js/build.js
// ============================================================

DoClean   = false;
DoCompile = true;
DoMake    = true;
DoPackage = true;
DoDeploy  = false;
DoRun     = false;

ProjName    = "holamundo";
ProjModules = [ ProjName ];
LibModules  = [ "system", "bios", "memory", "dos" ];

Machine = "1";       // MSX1
Target  = "DOS1";    // .COM bajo MSX-DOS 1 (0100h)

AppSignature = false;
Verbose      = true;
