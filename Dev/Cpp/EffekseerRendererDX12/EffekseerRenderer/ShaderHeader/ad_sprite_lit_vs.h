#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tvs_4_0 /Emain /Fh ShaderHeader/ad_sprite_lit_vs.h
//    Shader/ad_sprite_lit_vs.fx
//
//
// Buffer Definitions: 
//
// cbuffer VS_ConstantBuffer
// {
//
//   float4x4 _255_mCamera;             // Offset:    0 Size:    64
//   float4x4 _255_mProj;               // Offset:   64 Size:    64
//   float4 _255_mUVInversed;           // Offset:  128 Size:    16
//   float4 _255_mflipbookParameter;    // Offset:  144 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// VS_ConstantBuffer                 cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// TEXCOORD                 0   xyz         0     NONE  float   xyz 
// TEXCOORD                 1   xyzw        1     NONE  float   xyzw
// TEXCOORD                 2   xyzw        2     NONE  float   xyz 
// TEXCOORD                 3   xyzw        3     NONE  float   xyz 
// TEXCOORD                 4   xy          4     NONE  float   xy  
// TEXCOORD                 5   xy          5     NONE  float       
// TEXCOORD                 6   xyzw        6     NONE  float   xyzw
// TEXCOORD                 7   xy          7     NONE  float   xy  
// TEXCOORD                 8   xyzw        8     NONE  float   xyzw
// TEXCOORD                 9   x           9     NONE  float   x   
// TEXCOORD                10   x          10     NONE  float   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// TEXCOORD                 0   xyzw        0     NONE  float   xyzw
// TEXCOORD                 1   xy          1     NONE  float   xy  
// TEXCOORD                 2   xyz         2     NONE  float   xyz 
// TEXCOORD                 3   xyz         3     NONE  float   xyz 
// TEXCOORD                 4   xyz         4     NONE  float   xyz 
// TEXCOORD                 5   xyzw        5     NONE  float   xyzw
// TEXCOORD                 6   xyzw        6     NONE  float   xyzw
// TEXCOORD                 7   xyzw        7     NONE  float   xyzw
// TEXCOORD                 8   xy          8     NONE  float   xy  
// TEXCOORD                 9   xyzw        9     NONE  float   xyzw
// SV_Position              0   xyzw       10      POS  float   xyzw
//
vs_4_0
dcl_constantbuffer cb0[10], immediateIndexed
dcl_input v0.xyz
dcl_input v1.xyzw
dcl_input v2.xyz
dcl_input v3.xyz
dcl_input v4.xy
dcl_input v6.xyzw
dcl_input v7.xy
dcl_input v8.xyzw
dcl_input v9.x
dcl_input v10.x
dcl_output o0.xyzw
dcl_output o1.xy
dcl_output o2.xyz
dcl_output o3.xyz
dcl_output o4.xyz
dcl_output o5.xyzw
dcl_output o6.xyzw
dcl_output o7.xyzw
dcl_output o8.xy
dcl_output o9.xyzw
dcl_output_siv o10.xyzw, position
dcl_temps 10
add r0.xyz, v2.xyzx, l(-0.500000, -0.500000, -0.500000, 0.000000)
add r0.xyz, r0.xyzx, r0.xyzx
add r1.xyz, v3.xyzx, l(-0.500000, -0.500000, -0.500000, 0.000000)
add r1.xyz, r1.xyzx, r1.xyzx
mul r2.xyz, r0.zxyz, r1.yzxy
mad o3.xyz, r0.yzxy, r1.zxyz, -r2.xyzx
mad r2.x, cb0[8].y, v4.y, cb0[8].x
mul r3.xyzw, v0.yyyy, cb0[1].xyzw
mad r3.xyzw, cb0[0].xyzw, v0.xxxx, r3.xyzw
mad r3.xyzw, cb0[2].xyzw, v0.zzzz, r3.xyzw
add r3.xyzw, r3.xyzw, cb0[3].xyzw
div r3.xyzw, r3.xyzw, r3.wwww
mul r4.xyzw, r3.yyyy, cb0[5].xyzw
mad r4.xyzw, cb0[4].xyzw, r3.xxxx, r4.xyzw
mad r4.xyzw, cb0[6].xyzw, r3.zzzz, r4.xyzw
mad r3.xyzw, cb0[7].xyzw, r3.wwww, r4.xyzw
mad o5.yw, cb0[8].yyyy, v6.yyyw, cb0[8].xxxx
mad r4.x, cb0[8].y, v7.y, cb0[8].x
mad o6.yw, cb0[8].yyyy, v8.yyyw, cb0[8].xxxx
lt r0.w, l(0.000000), cb0[9].x
if_nz r0.w
  frc r5.x, v9.x
  round_ni r6.x, v9.x
  add r0.w, r6.x, l(1.000000)
  mul r1.w, cb0[9].w, cb0[9].z
  eq r2.w, cb0[9].y, l(0.000000)
  if_nz r2.w
    ge r2.w, r0.w, r1.w
    mad r5.z, cb0[9].z, cb0[9].w, l(-1.000000)
    add r6.y, r6.x, l(1.000000)
    movc r5.zw, r2.wwww, r5.zzzz, r6.xxxy
  else 
    div r2.w, r6.x, r1.w
    round_ni r2.w, r2.w
    mad r7.x, -r1.w, r2.w, r6.x
    div r6.y, r0.w, r1.w
    round_ni r6.y, r6.y
    mad r7.y, -r1.w, r6.y, r0.w
    eq r7.zw, cb0[9].yyyy, l(0.000000, 0.000000, 1.000000, 2.000000)
    mul r0.w, r2.w, l(0.500000)
    round_ni r0.w, r0.w
    mad r0.w, -r0.w, l(2.000000), r2.w
    eq r0.w, r0.w, l(1.000000)
    mad r1.w, cb0[9].z, cb0[9].w, l(-1.000000)
    round_ni r8.xy, r7.xyxx
    add r8.xy, r1.wwww, -r8.xyxx
    movc r9.x, r0.w, r8.x, r7.x
    mul r0.w, r6.y, l(0.500000)
    round_ni r0.w, r0.w
    mad r0.w, -r0.w, l(2.000000), r6.y
    eq r0.w, r0.w, l(1.000000)
    movc r9.y, r0.w, r8.y, r7.y
    add r6.z, r6.x, l(1.000000)
    movc r6.xy, r7.wwww, r9.xyxx, r6.xzxx
    movc r5.zw, r7.zzzz, r7.xxxy, r6.xxxy
  endif 
  ftoi r5.zw, r5.zzzw
  ftoi r0.w, cb0[9].z
  and r6.xy, r5.zwzz, l(0x80000000, 0x80000000, 0, 0)
  imax r6.zw, r5.zzzw, -r5.zzzw
  imax r1.w, r0.w, -r0.w
  udiv r7.x, r8.x, r6.z, r1.w
  ineg r2.w, r8.x
  movc r2.w, r6.x, r2.w, r8.x
  itof r8.x, r2.w
  xor r5.zw, r0.wwww, r5.zzzw
  ineg r0.w, r7.x
  and r5.zw, r5.zzzw, l(0, 0, 0x80000000, 0x80000000)
  movc r0.w, r5.z, r0.w, r7.x
  itof r8.y, r0.w
  div r6.xz, l(1.000000, 1.000000, 1.000000, 1.000000), cb0[9].zzwz
  mov r2.y, v4.x
  mad r2.yw, -r8.xxxy, r6.xxxz, r2.yyyx
  mul r2.yw, r2.yyyw, cb0[9].zzzw
  udiv r7.x, r8.x, r6.w, r1.w
  ineg r0.w, r8.x
  movc r0.w, r6.y, r0.w, r8.x
  itof r8.x, r0.w
  ineg r0.w, r7.x
  movc r0.w, r5.w, r0.w, r7.x
  itof r8.y, r0.w
  mul r5.zw, r6.xxxz, r8.xxxy
  mad r4.yz, r2.yywy, r6.xxzx, r5.zzwz
else 
  mov r4.yz, l(0,0,0,0)
  mov r5.x, l(0)
endif 
mov o0.xyzw, v1.xyzw
mov o5.xz, v6.xxzx
mov o6.xz, v8.xxzx
mov r4.w, v7.x
mov o7.xyzw, r4.wxyz
mov o9.xyzw, r3.xyzw
mov o10.xyzw, r3.xyzw
mov o2.xyz, r0.xyzx
mov o4.xyz, r1.xyzx
mov r2.z, v4.x
mov o1.xy, r2.zxzz
mov r5.y, v10.x
mov o8.xy, r5.xyxx
ret 
// Approximately 101 instruction slots used
#endif

const BYTE g_main[] =
{
     68,  88,  66,  67, 149, 218, 
     20, 133, 162,  78,  23,  48, 
    197, 247,   1, 191, 145,  48, 
    208, 229,   1,   0,   0,   0, 
    208,  16,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   1,   0,   0, 192,   2, 
      0,   0, 240,   3,   0,   0, 
     84,  16,   0,   0,  82,  68, 
     69,  70,  96,   1,   0,   0, 
      1,   0,   0,   0,  80,   0, 
      0,   0,   1,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    254, 255,  16,   1,   0,   0, 
     44,   1,   0,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     86,  83,  95,  67, 111, 110, 
    115, 116,  97, 110, 116,  66, 
    117, 102, 102, 101, 114,   0, 
    171, 171,  60,   0,   0,   0, 
      4,   0,   0,   0, 104,   0, 
      0,   0, 160,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 200,   0,   0,   0, 
      0,   0,   0,   0,  64,   0, 
      0,   0,   2,   0,   0,   0, 
    216,   0,   0,   0,   0,   0, 
      0,   0, 232,   0,   0,   0, 
     64,   0,   0,   0,  64,   0, 
      0,   0,   2,   0,   0,   0, 
    216,   0,   0,   0,   0,   0, 
      0,   0, 243,   0,   0,   0, 
    128,   0,   0,   0,  16,   0, 
      0,   0,   2,   0,   0,   0, 
      4,   1,   0,   0,   0,   0, 
      0,   0,  20,   1,   0,   0, 
    144,   0,   0,   0,  16,   0, 
      0,   0,   2,   0,   0,   0, 
      4,   1,   0,   0,   0,   0, 
      0,   0,  95,  50,  53,  53, 
     95, 109,  67,  97, 109, 101, 
    114,  97,   0, 171, 171, 171, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  95,  50, 
     53,  53,  95, 109,  80, 114, 
    111, 106,   0,  95,  50,  53, 
     53,  95, 109,  85,  86,  73, 
    110, 118, 101, 114, 115, 101, 
    100,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  50,  53,  53,  95, 109, 
    102, 108, 105, 112,  98, 111, 
    111, 107,  80,  97, 114,  97, 
    109, 101, 116, 101, 114,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  57, 
     46,  50,  57,  46,  57,  53, 
     50,  46,  51,  49,  49,  49, 
      0, 171, 171, 171,  73,  83, 
     71,  78,  28,   1,   0,   0, 
     11,   0,   0,   0,   8,   0, 
      0,   0,  16,   1,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   7,   7, 
      0,   0,  16,   1,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0,  16,   1,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   7, 
      0,   0,  16,   1,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,  15,   7, 
      0,   0,  16,   1,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,   3,   3, 
      0,   0,  16,   1,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,   3,   0, 
      0,   0,  16,   1,   0,   0, 
      6,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      6,   0,   0,   0,  15,  15, 
      0,   0,  16,   1,   0,   0, 
      7,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      7,   0,   0,   0,   3,   3, 
      0,   0,  16,   1,   0,   0, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  15,  15, 
      0,   0,  16,   1,   0,   0, 
      9,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      9,   0,   0,   0,   1,   1, 
      0,   0,  16,   1,   0,   0, 
     10,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     10,   0,   0,   0,   1,   1, 
      0,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     40,   1,   0,   0,  11,   0, 
      0,   0,   8,   0,   0,   0, 
     16,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     16,   1,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   3,  12,   0,   0, 
     16,   1,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   7,   8,   0,   0, 
     16,   1,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   7,   8,   0,   0, 
     16,   1,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   4,   0, 
      0,   0,   7,   8,   0,   0, 
     16,   1,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   5,   0, 
      0,   0,  15,   0,   0,   0, 
     16,   1,   0,   0,   6,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   6,   0, 
      0,   0,  15,   0,   0,   0, 
     16,   1,   0,   0,   7,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   7,   0, 
      0,   0,  15,   0,   0,   0, 
     16,   1,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,   3,  12,   0,   0, 
     16,   1,   0,   0,   9,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   9,   0, 
      0,   0,  15,   0,   0,   0, 
     25,   1,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,  10,   0, 
      0,   0,  15,   0,   0,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  83,  86,  95, 
     80, 111, 115, 105, 116, 105, 
    111, 110,   0, 171, 171, 171, 
     83,  72,  68,  82,  92,  12, 
      0,   0,  64,   0,   1,   0, 
     23,   3,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,  10,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   1,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   2,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   3,   0, 
      0,   0,  95,   0,   0,   3, 
     50,  16,  16,   0,   4,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   6,   0, 
      0,   0,  95,   0,   0,   3, 
     50,  16,  16,   0,   7,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   8,   0, 
      0,   0,  95,   0,   0,   3, 
     18,  16,  16,   0,   9,   0, 
      0,   0,  95,   0,   0,   3, 
     18,  16,  16,   0,  10,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 101,   0,   0,   3, 
     50,  32,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   2,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   3,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   4,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   5,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   6,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   7,   0, 
      0,   0, 101,   0,   0,   3, 
     50,  32,  16,   0,   8,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   9,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,  10,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,  10,   0, 
      0,   0,   0,   0,   0,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0, 191, 
      0,   0,   0, 191,   0,   0, 
      0, 191,   0,   0,   0,   0, 
      0,   0,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      0,  10, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,  18, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0, 191,   0,   0,   0, 191, 
      0,   0,   0, 191,   0,   0, 
      0,   0,   0,   0,   0,   7, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   2,   0,   0,   0, 
     38,   9,  16,   0,   0,   0, 
      0,   0, 150,   4,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 114,  32,  16,   0, 
      3,   0,   0,   0, 150,   4, 
     16,   0,   0,   0,   0,   0, 
     38,   9,  16,   0,   1,   0, 
      0,   0,  70,   2,  16, 128, 
     65,   0,   0,   0,   2,   0, 
      0,   0,  50,   0,   0,  11, 
     18,   0,  16,   0,   2,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  26,  16,  16,   0, 
      4,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  56,   0, 
      0,   8, 242,   0,  16,   0, 
      3,   0,   0,   0,  86,  21, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     50,   0,   0,  10, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      3,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      3,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0, 166,  26, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   3,   0, 
      0,   0,   0,   0,   0,   8, 
    242,   0,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      3,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  14,   0, 
      0,   7, 242,   0,  16,   0, 
      3,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
    246,  15,  16,   0,   3,   0, 
      0,   0,  56,   0,   0,   8, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  86,   5,  16,   0, 
      3,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      4,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   6,   0, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,  10, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0, 166,  10,  16,   0, 
      3,   0,   0,   0,  70,  14, 
     16,   0,   4,   0,   0,   0, 
     50,   0,   0,  10, 242,   0, 
     16,   0,   3,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   7,   0,   0,   0, 
    246,  15,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      4,   0,   0,   0,  50,   0, 
      0,  11, 162,  32,  16,   0, 
      5,   0,   0,   0,  86, 133, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  86,  29, 
     16,   0,   6,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     50,   0,   0,  11,  18,   0, 
     16,   0,   4,   0,   0,   0, 
     26, 128,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     26,  16,  16,   0,   7,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  50,   0,   0,  11, 
    162,  32,  16,   0,   6,   0, 
      0,   0,  86, 133,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  86,  29,  16,   0, 
      8,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  49,   0, 
      0,   8, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
     31,   0,   4,   3,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,   0,   5,  18,   0, 
     16,   0,   5,   0,   0,   0, 
     10,  16,  16,   0,   9,   0, 
      0,   0,  65,   0,   0,   5, 
     18,   0,  16,   0,   6,   0, 
      0,   0,  10,  16,  16,   0, 
      9,   0,   0,   0,   0,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   6,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  56,   0,   0,   9, 
    130,   0,  16,   0,   1,   0, 
      0,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  24,   0,   0,   8, 
    130,   0,  16,   0,   2,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      4,   3,  58,   0,  16,   0, 
      2,   0,   0,   0,  29,   0, 
      0,   7, 130,   0,  16,   0, 
      2,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  11, 
     66,   0,  16,   0,   5,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
      0,   7,  34,   0,  16,   0, 
      6,   0,   0,   0,  10,   0, 
     16,   0,   6,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  55,   0,   0,   9, 
    194,   0,  16,   0,   5,   0, 
      0,   0, 246,  15,  16,   0, 
      2,   0,   0,   0, 166,  10, 
     16,   0,   5,   0,   0,   0, 
      6,   4,  16,   0,   6,   0, 
      0,   0,  18,   0,   0,   1, 
     14,   0,   0,   7, 130,   0, 
     16,   0,   2,   0,   0,   0, 
     10,   0,  16,   0,   6,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0,  65,   0, 
      0,   5, 130,   0,  16,   0, 
      2,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
     50,   0,   0,  10,  18,   0, 
     16,   0,   7,   0,   0,   0, 
     58,   0,  16, 128,  65,   0, 
      0,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      6,   0,   0,   0,  14,   0, 
      0,   7,  34,   0,  16,   0, 
      6,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  65,   0,   0,   5, 
     34,   0,  16,   0,   6,   0, 
      0,   0,  26,   0,  16,   0, 
      6,   0,   0,   0,  50,   0, 
      0,  10,  34,   0,  16,   0, 
      7,   0,   0,   0,  58,   0, 
     16, 128,  65,   0,   0,   0, 
      1,   0,   0,   0,  26,   0, 
     16,   0,   6,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  24,   0,   0,  11, 
    194,   0,  16,   0,   7,   0, 
      0,   0,  86, 133,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0,   0,  64,  56,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,  63,  65,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  10, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,  64, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  24,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     50,   0,   0,  11, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
     58, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128, 191,  65,   0,   0,   5, 
     50,   0,  16,   0,   8,   0, 
      0,   0,  70,   0,  16,   0, 
      7,   0,   0,   0,   0,   0, 
      0,   8,  50,   0,  16,   0, 
      8,   0,   0,   0, 246,  15, 
     16,   0,   1,   0,   0,   0, 
     70,   0,  16, 128,  65,   0, 
      0,   0,   8,   0,   0,   0, 
     55,   0,   0,   9,  18,   0, 
     16,   0,   9,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      8,   0,   0,   0,  10,   0, 
     16,   0,   7,   0,   0,   0, 
     56,   0,   0,   7, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   6,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,  63,  65,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  10, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,  64,  26,   0,  16,   0, 
      6,   0,   0,   0,  24,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
    128,  63,  55,   0,   0,   9, 
     34,   0,  16,   0,   9,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   8,   0,   0,   0, 
     26,   0,  16,   0,   7,   0, 
      0,   0,   0,   0,   0,   7, 
     66,   0,  16,   0,   6,   0, 
      0,   0,  10,   0,  16,   0, 
      6,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     55,   0,   0,   9,  50,   0, 
     16,   0,   6,   0,   0,   0, 
    246,  15,  16,   0,   7,   0, 
      0,   0,  70,   0,  16,   0, 
      9,   0,   0,   0, 134,   0, 
     16,   0,   6,   0,   0,   0, 
     55,   0,   0,   9, 194,   0, 
     16,   0,   5,   0,   0,   0, 
    166,  10,  16,   0,   7,   0, 
      0,   0,   6,   4,  16,   0, 
      7,   0,   0,   0,   6,   4, 
     16,   0,   6,   0,   0,   0, 
     21,   0,   0,   1,  27,   0, 
      0,   5, 194,   0,  16,   0, 
      5,   0,   0,   0, 166,  14, 
     16,   0,   5,   0,   0,   0, 
     27,   0,   0,   6, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
      1,   0,   0,  10,  50,   0, 
     16,   0,   6,   0,   0,   0, 
    230,  10,  16,   0,   5,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0, 128,   0,   0, 
      0, 128,   0,   0,   0,   0, 
      0,   0,   0,   0,  36,   0, 
      0,   8, 194,   0,  16,   0, 
      6,   0,   0,   0, 166,  14, 
     16,   0,   5,   0,   0,   0, 
    166,  14,  16, 128,  65,   0, 
      0,   0,   5,   0,   0,   0, 
     36,   0,   0,   8, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,  78,   0,   0,   9, 
     18,   0,  16,   0,   7,   0, 
      0,   0,  18,   0,  16,   0, 
      8,   0,   0,   0,  42,   0, 
     16,   0,   6,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  40,   0,   0,   5, 
    130,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      8,   0,   0,   0,  55,   0, 
      0,   9, 130,   0,  16,   0, 
      2,   0,   0,   0,  10,   0, 
     16,   0,   6,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      8,   0,   0,   0,  43,   0, 
      0,   5,  18,   0,  16,   0, 
      8,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
     87,   0,   0,   7, 194,   0, 
     16,   0,   5,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0, 166,  14,  16,   0, 
      5,   0,   0,   0,  40,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   7,   0,   0,   0, 
      1,   0,   0,  10, 194,   0, 
     16,   0,   5,   0,   0,   0, 
    166,  14,  16,   0,   5,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0, 128, 
      0,   0,   0, 128,  55,   0, 
      0,   9, 130,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   5,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      7,   0,   0,   0,  43,   0, 
      0,   5,  34,   0,  16,   0, 
      8,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     14,   0,   0,  11,  82,   0, 
     16,   0,   6,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0, 128,  63,   0,   0, 
    128,  63, 166, 139,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  54,   0,   0,   5, 
     34,   0,  16,   0,   2,   0, 
      0,   0,  10,  16,  16,   0, 
      4,   0,   0,   0,  50,   0, 
      0,  10, 162,   0,  16,   0, 
      2,   0,   0,   0,   6,   4, 
     16, 128,  65,   0,   0,   0, 
      8,   0,   0,   0,   6,   8, 
     16,   0,   6,   0,   0,   0, 
     86,   1,  16,   0,   2,   0, 
      0,   0,  56,   0,   0,   8, 
    162,   0,  16,   0,   2,   0, 
      0,   0,  86,  13,  16,   0, 
      2,   0,   0,   0, 166, 142, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  78,   0, 
      0,   9,  18,   0,  16,   0, 
      7,   0,   0,   0,  18,   0, 
     16,   0,   8,   0,   0,   0, 
     58,   0,  16,   0,   6,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0,  40,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   8,   0,   0,   0, 
     55,   0,   0,   9, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   6,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   8,   0,   0,   0, 
     43,   0,   0,   5,  18,   0, 
     16,   0,   8,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  40,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      7,   0,   0,   0,  55,   0, 
      0,   9, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   5,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      7,   0,   0,   0,  43,   0, 
      0,   5,  34,   0,  16,   0, 
      8,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   7, 194,   0, 
     16,   0,   5,   0,   0,   0, 
      6,   8,  16,   0,   6,   0, 
      0,   0,   6,   4,  16,   0, 
      8,   0,   0,   0,  50,   0, 
      0,   9,  98,   0,  16,   0, 
      4,   0,   0,   0,  86,   7, 
     16,   0,   2,   0,   0,   0, 
      6,   2,  16,   0,   6,   0, 
      0,   0, 166,  11,  16,   0, 
      5,   0,   0,   0,  18,   0, 
      0,   1,  54,   0,   0,   8, 
     98,   0,  16,   0,   4,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5,  18,   0,  16,   0, 
      5,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     21,   0,   0,   1,  54,   0, 
      0,   5, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   5,  82,  32, 
     16,   0,   5,   0,   0,   0, 
      6,  18,  16,   0,   6,   0, 
      0,   0,  54,   0,   0,   5, 
     82,  32,  16,   0,   6,   0, 
      0,   0,   6,  18,  16,   0, 
      8,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      4,   0,   0,   0,  10,  16, 
     16,   0,   7,   0,   0,   0, 
     54,   0,   0,   5, 242,  32, 
     16,   0,   7,   0,   0,   0, 
     54,   9,  16,   0,   4,   0, 
      0,   0,  54,   0,   0,   5, 
    242,  32,  16,   0,   9,   0, 
      0,   0,  70,  14,  16,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   5, 242,  32,  16,   0, 
     10,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
     54,   0,   0,   5, 114,  32, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    114,  32,  16,   0,   4,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   5,  66,   0,  16,   0, 
      2,   0,   0,   0,  10,  16, 
     16,   0,   4,   0,   0,   0, 
     54,   0,   0,   5,  50,  32, 
     16,   0,   1,   0,   0,   0, 
     38,  10,  16,   0,   2,   0, 
      0,   0,  54,   0,   0,   5, 
     34,   0,  16,   0,   5,   0, 
      0,   0,  10,  16,  16,   0, 
     10,   0,   0,   0,  54,   0, 
      0,   5,  50,  32,  16,   0, 
      8,   0,   0,   0,  70,   0, 
     16,   0,   5,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 116,   0,   0,   0, 
    101,   0,   0,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     21,   0,   0,   0,  34,   0, 
      0,   0,   6,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  26,   0, 
      0,   0,   9,   0,   0,   0, 
     13,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};