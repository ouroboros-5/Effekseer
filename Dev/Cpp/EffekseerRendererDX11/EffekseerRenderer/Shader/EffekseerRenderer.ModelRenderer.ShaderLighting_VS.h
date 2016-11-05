﻿#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tvs_4_0_level_9_3 /EVS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderLighting_VS.h
//    Shader/model_renderer_lighting_VS.fx
//
//
// Buffer Definitions: 
//
// cbuffer $Globals
// {
//
//   float4x4 mCameraProj;              // Offset:    0 Size:    64
//   float4x4 mModel[40];               // Offset:   64 Size:  2560
//   float4 fUV[40];                    // Offset: 2624 Size:   640
//   float4 fModelColor[40];            // Offset: 3264 Size:   640
//   float4 fLightDirection;            // Offset: 3904 Size:    16
//   float4 fLightColor;                // Offset: 3920 Size:    16
//   float4 fLightAmbient;              // Offset: 3936 Size:    16 [unused]
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// $Globals                          cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// POSITION                 0   xyz         0     NONE  float   xyz 
// NORMAL                   0   xyz         1     NONE  float   xyz 
// NORMAL                   1   xyz         2     NONE  float       
// NORMAL                   2   xyz         3     NONE  float       
// TEXCOORD                 0   xy          4     NONE  float   xy  
// NORMAL                   3   xyzw        5     NONE  float   xyzw
// BLENDINDICES             0   xyzw        6     NONE   uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float   xyzw
// TEXCOORD                 0   xy          1     NONE  float   xy  
// COLOR                    0   xyzw        2     NONE  float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c0         cb0             0       246  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c246                            Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_x
    def c247, 4, 0, 1, 0
    dcl_texcoord v0
    dcl_texcoord1 v1
    dcl_texcoord4 v4
    dcl_texcoord5 v5
    dcl_texcoord6 v6
    mova a0.x, v6.x
    mad oT0.xy, v4, c164[a0.x].zwzw, c164[a0.x]
    mul r0, v5, c204[a0.x]
    mov r1.w, c247.z
    mul r2.x, v6.x, c247.x
    mova a0.x, r2.x
    mul r2.xyz, v1.y, c5[a0.x]
    mad r2.xyz, c4[a0.x], v1.x, r2
    mad r2.xyz, c6[a0.x], v1.z, r2
    nrm r3.xyz, r2
    dp3 r2.x, c244, r3
    max r1.xyz, r2.x, c247.y
    mul r1, r1, c245
    mul oT1, r0, r1
    mul r0, v0.y, c5[a0.x]
    mad r0, c4[a0.x], v0.x, r0
    mad r0, c6[a0.x], v0.z, r0
    add r0, r0, c7[a0.x]
    mul r1, r0.y, c1
    mad r1, c0, r0.x, r1
    mad r1, c2, r0.z, r1
    mad r0, c3, r0.w, r1
    mad oPos.xy, r0.w, c246, r0
    mov oPos.zw, r0

// approximately 26 instruction slots used
vs_4_0
dcl_constantbuffer cb0[246], dynamicIndexed
dcl_input v0.xyz
dcl_input v1.xyz
dcl_input v4.xy
dcl_input v5.xyzw
dcl_input v6.x
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_output o2.xyzw
dcl_temps 3
ishl r0.x, v6.x, l(2)
mul r1.xyzw, v0.yyyy, cb0[r0.x + 5].xyzw
mad r1.xyzw, cb0[r0.x + 4].xyzw, v0.xxxx, r1.xyzw
mad r1.xyzw, cb0[r0.x + 6].xyzw, v0.zzzz, r1.xyzw
add r1.xyzw, r1.xyzw, cb0[r0.x + 7].xyzw
mul r2.xyzw, r1.yyyy, cb0[1].xyzw
mad r2.xyzw, cb0[0].xyzw, r1.xxxx, r2.xyzw
mad r2.xyzw, cb0[2].xyzw, r1.zzzz, r2.xyzw
mad o0.xyzw, cb0[3].xyzw, r1.wwww, r2.xyzw
mov r0.y, v6.x
mad o1.xy, v4.xyxx, cb0[r0.y + 164].zwzz, cb0[r0.y + 164].xyxx
mul r1.xyzw, v5.xyzw, cb0[r0.y + 204].xyzw
mul r0.yzw, v1.yyyy, cb0[r0.x + 5].xxyz
mad r0.yzw, cb0[r0.x + 4].xxyz, v1.xxxx, r0.yyzw
mad r0.xyz, cb0[r0.x + 6].xyzx, v1.zzzz, r0.yzwy
dp3 r0.w, r0.xyzx, r0.xyzx
rsq r0.w, r0.w
mul r0.xyz, r0.wwww, r0.xyzx
dp3 r0.x, cb0[244].xyzx, r0.xyzx
max r0.xyz, r0.xxxx, l(0.000000, 0.000000, 0.000000, 0.000000)
mov r0.w, l(1.000000)
mul r0.xyzw, r0.xyzw, cb0[245].xyzw
mul o2.xyzw, r1.xyzw, r0.xyzw
ret 
// Approximately 24 instruction slots used
#endif

const BYTE g_VS[] =
{
     68,  88,  66,  67,  84, 176, 
    127, 170, 183, 161, 139, 193, 
    237,  70,   9, 185, 179, 233, 
    137, 138,   1,   0,   0,   0, 
     16,  10,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
    136,   2,   0,   0,  96,   6, 
      0,   0, 220,   6,   0,   0, 
    188,   8,   0,   0, 156,   9, 
      0,   0,  65, 111, 110,  57, 
     72,   2,   0,   0,  72,   2, 
      0,   0,   0,   2, 254, 255, 
     20,   2,   0,   0,  52,   0, 
      0,   0,   1,   0,  36,   0, 
      0,   0,  48,   0,   0,   0, 
     48,   0,   0,   0,  36,   0, 
      1,   0,  48,   0,   0,   0, 
      0,   0, 246,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    246,   0,   1,   2, 254, 255, 
     81,   0,   0,   5, 247,   0, 
     15, 160,   0,   0, 128,  64, 
      0,   0,   0,   0,   0,   0, 
    128,  63,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      5, 128,   5,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      6, 128,   6,   0,  15, 144, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   6,   0,   0, 144, 
      4,   0,   0,   6,   0,   0, 
      3, 224,   4,   0, 228, 144, 
    164,  32, 238, 160,   0,   0, 
      0, 176, 164,  32, 228, 160, 
      0,   0,   0, 176,   5,   0, 
      0,   4,   0,   0,  15, 128, 
      5,   0, 228, 144, 204,  32, 
    228, 160,   0,   0,   0, 176, 
      1,   0,   0,   2,   1,   0, 
      8, 128, 247,   0, 170, 160, 
      5,   0,   0,   3,   2,   0, 
      1, 128,   6,   0,   0, 144, 
    247,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      2,   0,   0, 128,   5,   0, 
      0,   4,   2,   0,   7, 128, 
      1,   0,  85, 144,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   2,   0, 
      7, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
      0, 144,   2,   0, 228, 128, 
      4,   0,   0,   5,   2,   0, 
      7, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
    170, 144,   2,   0, 228, 128, 
     36,   0,   0,   2,   3,   0, 
      7, 128,   2,   0, 228, 128, 
      8,   0,   0,   3,   2,   0, 
      1, 128, 244,   0, 228, 160, 
      3,   0, 228, 128,  11,   0, 
      0,   3,   1,   0,   7, 128, 
      2,   0,   0, 128, 247,   0, 
     85, 160,   5,   0,   0,   3, 
      1,   0,  15, 128,   1,   0, 
    228, 128, 245,   0, 228, 160, 
      5,   0,   0,   3,   1,   0, 
     15, 224,   0,   0, 228, 128, 
      1,   0, 228, 128,   5,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0,  85, 144,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
      0, 144,   0,   0, 228, 128, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
    170, 144,   0,   0, 228, 128, 
      2,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      7,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      1,   0,  15, 128,   0,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      3,   0, 228, 160,   0,   0, 
    255, 128,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
      3, 192,   0,   0, 255, 128, 
    246,   0, 228, 160,   0,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   0,  12, 192,   0,   0, 
    228, 128, 255, 255,   0,   0, 
     83,  72,  68,  82, 208,   3, 
      0,   0,  64,   0,   1,   0, 
    244,   0,   0,   0,  89,   8, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0, 246,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   1,   0, 
      0,   0,  95,   0,   0,   3, 
     50,  16,  16,   0,   4,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   5,   0, 
      0,   0,  95,   0,   0,   3, 
     18,  16,  16,   0,   6,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3,  50,  32, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   2,   0,   0,   0, 
    104,   0,   0,   2,   3,   0, 
      0,   0,  41,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,  16,  16,   0, 
      6,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
     56,   0,   0,  10, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     86,  21,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,   5,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  12, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   6,   0,   0,   0,   0, 
      4,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  12, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   6,   0,   0,   0,   0, 
      6,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
    166,  26,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   0,   0, 
      0,  10, 242,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   6,   0,   0, 
      0,   0,   7,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  86,   5,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      2,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  10, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0, 166,  10,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     50,   0,   0,  10, 242,  32, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
    246,  15,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   5,  34,   0,  16,   0, 
      0,   0,   0,   0,  10,  16, 
     16,   0,   6,   0,   0,   0, 
     50,   0,   0,  15,  50,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   4,   0, 
      0,   0, 230, 138,  32,   6, 
      0,   0,   0,   0, 164,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  70, 128, 
     32,   6,   0,   0,   0,   0, 
    164,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   5,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0, 204,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,  10, 226,   0,  16,   0, 
      0,   0,   0,   0,  86,  21, 
     16,   0,   1,   0,   0,   0, 
      6, 137,  32,   6,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    226,   0,  16,   0,   0,   0, 
      0,   0,   6, 137,  32,   6, 
      0,   0,   0,   0,   4,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   6,  16, 
     16,   0,   1,   0,   0,   0, 
     86,  14,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   6, 
      0,   0,   0,   0,   6,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0, 166,  26, 
     16,   0,   1,   0,   0,   0, 
    150,   7,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     68,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0, 244,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  52,   0,   0,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  56,   0,   0,   8, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
    245,   0,   0,   0,  56,   0, 
      0,   7, 242,  32,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  24,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     12,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  82,  68, 
     69,  70, 216,   1,   0,   0, 
      1,   0,   0,   0,  72,   0, 
      0,   0,   1,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    254, 255,  16,   1,   0,   0, 
    166,   1,   0,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     36,  71, 108, 111,  98,  97, 
    108, 115,   0, 171, 171, 171, 
     60,   0,   0,   0,   7,   0, 
      0,   0,  96,   0,   0,   0, 
    112,  15,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   1,   0,   0,   0,   0, 
      0,   0,  64,   0,   0,   0, 
      2,   0,   0,   0,  20,   1, 
      0,   0,   0,   0,   0,   0, 
     36,   1,   0,   0,  64,   0, 
      0,   0,   0,  10,   0,   0, 
      2,   0,   0,   0,  44,   1, 
      0,   0,   0,   0,   0,   0, 
     60,   1,   0,   0,  64,  10, 
      0,   0, 128,   2,   0,   0, 
      2,   0,   0,   0,  64,   1, 
      0,   0,   0,   0,   0,   0, 
     80,   1,   0,   0, 192,  12, 
      0,   0, 128,   2,   0,   0, 
      2,   0,   0,   0,  92,   1, 
      0,   0,   0,   0,   0,   0, 
    108,   1,   0,   0,  64,  15, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0, 124,   1, 
      0,   0,   0,   0,   0,   0, 
    140,   1,   0,   0,  80,  15, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0, 124,   1, 
      0,   0,   0,   0,   0,   0, 
    152,   1,   0,   0,  96,  15, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0, 124,   1, 
      0,   0,   0,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,  80, 114, 111, 106,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 109,  77, 
    111, 100, 101, 108,   0, 171, 
      3,   0,   3,   0,   4,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 102,  85, 
     86,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,  40,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  77, 111, 100, 101, 108, 
     67, 111, 108, 111, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 102,  76, 
    105, 103, 104, 116,  68, 105, 
    114, 101,  99, 116, 105, 111, 
    110,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  76, 105, 103, 104, 116, 
     67, 111, 108, 111, 114,   0, 
    102,  76, 105, 103, 104, 116, 
     65, 109,  98, 105, 101, 110, 
    116,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171,  73,  83, 
     71,  78, 216,   0,   0,   0, 
      7,   0,   0,   0,   8,   0, 
      0,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   7,   7, 
      0,   0, 185,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   7,   7, 
      0,   0, 185,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   7,   0, 
      0,   0, 185,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   7,   0, 
      0,   0, 192,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,   3,   3, 
      0,   0, 185,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,  15,  15, 
      0,   0, 201,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      6,   0,   0,   0,  15,   1, 
      0,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0,  78, 
     79,  82,  77,  65,  76,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  66,  76,  69, 
     78,  68,  73,  78,  68,  73, 
     67,  69,  83,   0, 171, 171, 
     79,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  92,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      3,  12,   0,   0, 101,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0, 171
};
