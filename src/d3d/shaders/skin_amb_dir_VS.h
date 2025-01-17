#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float4 ambientLight;
//   float4x3 boneMatrices[64];
//   float4x4 combinedMat;
//   int4 firstLight;
//   float4 fogData;
//   
//   struct
//   {
//       float4 color;
//       float4 position;
//       float4 direction;
//
//   } lights[8];
//   
//   float4 matCol;
//   float3x3 normalMat;
//   int numDirLights;
//   float4 surfProps;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   numDirLights i0       1
//   combinedMat  c0       4
//   normalMat    c8       3
//   matCol       c12      1
//   surfProps    c13      1
//   fogData      c14      1
//   ambientLight c15      1
//   firstLight   c16      1
//   lights       c17     24
//   boneMatrices c41    192
//

    vs_2_0
    def c4, 3, 0, 1, 0
    dcl_position v0
    dcl_normal v1
    dcl_texcoord v2
    dcl_color v3
    dcl_blendweight v4
    dcl_blendindices v5
    mul r0, v5, c4.x
    mova a0.w, r0.x
    dp3 r1.z, v1, c43[a0.w]
    mova a0.w, r0.x
    dp3 r1.x, v1, c41[a0.w]
    mova a0.w, r0.x
    dp3 r1.y, v1, c42[a0.w]
    mova a0.w, r0.y
    dp3 r2.z, v1, c43[a0.w]
    mova a0.w, r0.y
    dp3 r2.x, v1, c41[a0.w]
    mova a0.w, r0.y
    dp3 r2.y, v1, c42[a0.w]
    mul r2.xyz, r2, v4.y
    mad r1.xyz, r1, v4.x, r2
    mova a0.w, r0.z
    dp3 r2.z, v1, c43[a0.w]
    mova a0.w, r0.z
    dp3 r2.x, v1, c41[a0.w]
    mova a0.w, r0.z
    dp3 r2.y, v1, c42[a0.w]
    mad r1.xyz, r2, v4.z, r1
    mova a0.w, r0.w
    dp3 r2.z, v1, c43[a0.w]
    mova a0.w, r0.w
    dp3 r2.x, v1, c41[a0.w]
    mova a0.w, r0.w
    dp3 r2.y, v1, c42[a0.w]
    mad r1.xyz, r2, v4.w, r1
    mul r2.xyz, r1.y, c9
    mad r1.xyw, c8.xyzz, r1.x, r2.xyzz
    mad r1.xyz, c10, r1.z, r1.xyww
    mov r2.x, c13.x
    mad r2.xyz, c15, r2.x, v3
    mov r3.xyz, r2
    mov r1.w, c4.y
    rep i0
      add r2.w, r1.w, c16.x
      mul r2.w, r2.w, c4.x
      mova a0.w, r2.w
      dp3 r4.x, r1, -c19[a0.w]
      max r4.x, r4.x, c4.y
      mova a0.w, r2.w
      mul r4.xyz, r4.x, c17[a0.w]
      mad r3.xyz, r4, c13.z, r3
      add r1.w, r1.w, c4.z
    endrep
    mov r3.w, v3.w
    max r1, r3, c4.y
    min r1, r1, c4.z
    mul oD0, r1, c12
    mova a0.w, r0.y
    dp4 r1.x, v0, c41[a0.w]
    mova a0.w, r0.y
    dp4 r1.y, v0, c42[a0.w]
    mova a0.w, r0.y
    dp4 r1.z, v0, c43[a0.w]
    mul r1.xyz, r1, v4.y
    mova a0.w, r0.x
    dp4 r2.x, v0, c41[a0.w]
    mova a0.w, r0.x
    dp4 r2.y, v0, c42[a0.w]
    mova a0.w, r0.x
    dp4 r2.z, v0, c43[a0.w]
    mad r1.xyz, r2, v4.x, r1
    mova a0.w, r0.z
    dp4 r2.x, v0, c41[a0.w]
    mova a0.w, r0.z
    dp4 r2.y, v0, c42[a0.w]
    mova a0.w, r0.z
    dp4 r2.z, v0, c43[a0.w]
    mad r0.xyz, r2, v4.z, r1
    mova a0.w, r0.w
    dp4 r1.x, v0, c41[a0.w]
    mova a0.w, r0.w
    dp4 r1.y, v0, c42[a0.w]
    mova a0.w, r0.w
    dp4 r1.z, v0, c43[a0.w]
    mad r0.xyz, r1, v4.w, r0
    mul r1, r0.y, c1
    mad r1, c0, r0.x, r1
    mad r0, c2, r0.z, r1
    add r0, r0, c3
    mov oPos, r0
    add r0.x, r0.w, -c14.y
    mul r0.x, r0.x, c14.z
    max r0.x, r0.x, c14.w
    min oT0.z, r0.x, c4.z
    mov oT0.xy, v2

// approximately 92 instruction slots used
#endif

const BYTE g_vs20_main[] =
{
      0,   2, 254, 255, 254, 255, 
    145,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  21,   2, 
      0,   0,   0,   2, 254, 255, 
     10,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     14,   2,   0,   0, 228,   0, 
      0,   0,   2,   0,  15,   0, 
      1,   0,  62,   0, 244,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   1,   0,   0,   2,   0, 
     41,   0, 192,   0, 166,   0, 
     20,   1,   0,   0,   0,   0, 
      0,   0,  36,   1,   0,   0, 
      2,   0,   0,   0,   4,   0, 
      2,   0,  48,   1,   0,   0, 
      0,   0,   0,   0,  64,   1, 
      0,   0,   2,   0,  16,   0, 
      1,   0,  66,   0,  76,   1, 
      0,   0,   0,   0,   0,   0, 
     92,   1,   0,   0,   2,   0, 
     14,   0,   1,   0,  58,   0, 
    244,   0,   0,   0,   0,   0, 
      0,   0, 100,   1,   0,   0, 
      2,   0,  17,   0,  24,   0, 
     70,   0, 176,   1,   0,   0, 
      0,   0,   0,   0, 192,   1, 
      0,   0,   2,   0,  12,   0, 
      1,   0,  50,   0, 244,   0, 
      0,   0,   0,   0,   0,   0, 
    199,   1,   0,   0,   2,   0, 
      8,   0,   3,   0,  34,   0, 
    212,   1,   0,   0,   0,   0, 
      0,   0, 228,   1,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      2,   0, 244,   1,   0,   0, 
      0,   0,   0,   0,   4,   2, 
      0,   0,   2,   0,  13,   0, 
      1,   0,  54,   0, 244,   0, 
      0,   0,   0,   0,   0,   0, 
     97, 109,  98, 105, 101, 110, 
    116,  76, 105, 103, 104, 116, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  98, 111, 110, 101, 
     77,  97, 116, 114, 105,  99, 
    101, 115,   0, 171, 171, 171, 
      3,   0,   3,   0,   4,   0, 
      3,   0,  64,   0,   0,   0, 
      0,   0,   0,   0,  99, 111, 
    109,  98, 105, 110, 101, 100, 
     77,  97, 116,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 102, 105, 114, 115, 
    116,  76, 105, 103, 104, 116, 
      0, 171,   1,   0,   2,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    102, 111, 103,  68,  97, 116, 
     97,   0, 108, 105, 103, 104, 
    116, 115,   0,  99, 111, 108, 
    111, 114,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 111, 
    115, 105, 116, 105, 111, 110, 
      0, 100, 105, 114, 101,  99, 
    116, 105, 111, 110,   0, 171, 
    107,   1,   0,   0, 116,   1, 
      0,   0, 132,   1,   0,   0, 
    116,   1,   0,   0, 141,   1, 
      0,   0, 116,   1,   0,   0, 
      5,   0,   0,   0,   1,   0, 
     12,   0,   8,   0,   3,   0, 
    152,   1,   0,   0, 109,  97, 
    116,  67, 111, 108,   0, 110, 
    111, 114, 109,  97, 108,  77, 
     97, 116,   0, 171, 171, 171, 
      3,   0,   3,   0,   3,   0, 
      3,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 110, 117, 
    109,  68, 105, 114,  76, 105, 
    103, 104, 116, 115,   0, 171, 
    171, 171,   0,   0,   2,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    115, 117, 114, 102,  80, 114, 
    111, 112, 115,   0, 118, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171, 171, 171, 
     81,   0,   0,   5,   4,   0, 
     15, 160,   0,   0,  64,  64, 
      0,   0,   0,   0,   0,   0, 
    128,  63,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   3,   0, 
      0, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   2,   0,  15, 144, 
     31,   0,   0,   2,  10,   0, 
      0, 128,   3,   0,  15, 144, 
     31,   0,   0,   2,   1,   0, 
      0, 128,   4,   0,  15, 144, 
     31,   0,   0,   2,   2,   0, 
      0, 128,   5,   0,  15, 144, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   5,   0, 228, 144, 
      4,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0,   0, 128,   8,   0, 
      0,   4,   1,   0,   4, 128, 
      1,   0, 228, 144,  43,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0,   0, 128, 
      8,   0,   0,   4,   1,   0, 
      1, 128,   1,   0, 228, 144, 
     41,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
      0, 128,   8,   0,   0,   4, 
      1,   0,   2, 128,   1,   0, 
    228, 144,  42,  32, 228, 160, 
      0,   0, 255, 176,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0,  85, 128,   8,   0, 
      0,   4,   2,   0,   4, 128, 
      1,   0, 228, 144,  43,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0,  85, 128, 
      8,   0,   0,   4,   2,   0, 
      1, 128,   1,   0, 228, 144, 
     41,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
     85, 128,   8,   0,   0,   4, 
      2,   0,   2, 128,   1,   0, 
    228, 144,  42,  32, 228, 160, 
      0,   0, 255, 176,   5,   0, 
      0,   3,   2,   0,   7, 128, 
      2,   0, 228, 128,   4,   0, 
     85, 144,   4,   0,   0,   4, 
      1,   0,   7, 128,   1,   0, 
    228, 128,   4,   0,   0, 144, 
      2,   0, 228, 128,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0, 170, 128,   8,   0, 
      0,   4,   2,   0,   4, 128, 
      1,   0, 228, 144,  43,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0, 170, 128, 
      8,   0,   0,   4,   2,   0, 
      1, 128,   1,   0, 228, 144, 
     41,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
    170, 128,   8,   0,   0,   4, 
      2,   0,   2, 128,   1,   0, 
    228, 144,  42,  32, 228, 160, 
      0,   0, 255, 176,   4,   0, 
      0,   4,   1,   0,   7, 128, 
      2,   0, 228, 128,   4,   0, 
    170, 144,   1,   0, 228, 128, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0, 255, 128, 
      8,   0,   0,   4,   2,   0, 
      4, 128,   1,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
    255, 128,   8,   0,   0,   4, 
      2,   0,   1, 128,   1,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0, 255, 176,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0, 255, 128,   8,   0, 
      0,   4,   2,   0,   2, 128, 
      1,   0, 228, 144,  42,  32, 
    228, 160,   0,   0, 255, 176, 
      4,   0,   0,   4,   1,   0, 
      7, 128,   2,   0, 228, 128, 
      4,   0, 255, 144,   1,   0, 
    228, 128,   5,   0,   0,   3, 
      2,   0,   7, 128,   1,   0, 
     85, 128,   9,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     11, 128,   8,   0, 164, 160, 
      1,   0,   0, 128,   2,   0, 
    164, 128,   4,   0,   0,   4, 
      1,   0,   7, 128,  10,   0, 
    228, 160,   1,   0, 170, 128, 
      1,   0, 244, 128,   1,   0, 
      0,   2,   2,   0,   1, 128, 
     13,   0,   0, 160,   4,   0, 
      0,   4,   2,   0,   7, 128, 
     15,   0, 228, 160,   2,   0, 
      0, 128,   3,   0, 228, 144, 
      1,   0,   0,   2,   3,   0, 
      7, 128,   2,   0, 228, 128, 
      1,   0,   0,   2,   1,   0, 
      8, 128,   4,   0,  85, 160, 
     38,   0,   0,   1,   0,   0, 
    228, 240,   2,   0,   0,   3, 
      2,   0,   8, 128,   1,   0, 
    255, 128,  16,   0,   0, 160, 
      5,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
      4,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      2,   0, 255, 128,   8,   0, 
      0,   4,   4,   0,   1, 128, 
      1,   0, 228, 128,  19,  32, 
    228, 161,   0,   0, 255, 176, 
     11,   0,   0,   3,   4,   0, 
      1, 128,   4,   0,   0, 128, 
      4,   0,  85, 160,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      2,   0, 255, 128,   5,   0, 
      0,   4,   4,   0,   7, 128, 
      4,   0,   0, 128,  17,  32, 
    228, 160,   0,   0, 255, 176, 
      4,   0,   0,   4,   3,   0, 
      7, 128,   4,   0, 228, 128, 
     13,   0, 170, 160,   3,   0, 
    228, 128,   2,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   4,   0, 170, 160, 
     39,   0,   0,   0,   1,   0, 
      0,   2,   3,   0,   8, 128, 
      3,   0, 255, 144,  11,   0, 
      0,   3,   1,   0,  15, 128, 
      3,   0, 228, 128,   4,   0, 
     85, 160,  10,   0,   0,   3, 
      1,   0,  15, 128,   1,   0, 
    228, 128,   4,   0, 170, 160, 
      5,   0,   0,   3,   0,   0, 
     15, 208,   1,   0, 228, 128, 
     12,   0, 228, 160,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0,  85, 128,   9,   0, 
      0,   4,   1,   0,   1, 128, 
      0,   0, 228, 144,  41,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0,  85, 128, 
      9,   0,   0,   4,   1,   0, 
      2, 128,   0,   0, 228, 144, 
     42,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
     85, 128,   9,   0,   0,   4, 
      1,   0,   4, 128,   0,   0, 
    228, 144,  43,  32, 228, 160, 
      0,   0, 255, 176,   5,   0, 
      0,   3,   1,   0,   7, 128, 
      1,   0, 228, 128,   4,   0, 
     85, 144,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
      0, 128,   9,   0,   0,   4, 
      2,   0,   1, 128,   0,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0, 255, 176,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0,   0, 128,   9,   0, 
      0,   4,   2,   0,   2, 128, 
      0,   0, 228, 144,  42,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0,   0, 128, 
      9,   0,   0,   4,   2,   0, 
      4, 128,   0,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
    255, 176,   4,   0,   0,   4, 
      1,   0,   7, 128,   2,   0, 
    228, 128,   4,   0,   0, 144, 
      1,   0, 228, 128,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0, 170, 128,   9,   0, 
      0,   4,   2,   0,   1, 128, 
      0,   0, 228, 144,  41,  32, 
    228, 160,   0,   0, 255, 176, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0, 170, 128, 
      9,   0,   0,   4,   2,   0, 
      2, 128,   0,   0, 228, 144, 
     42,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
    170, 128,   9,   0,   0,   4, 
      2,   0,   4, 128,   0,   0, 
    228, 144,  43,  32, 228, 160, 
      0,   0, 255, 176,   4,   0, 
      0,   4,   0,   0,   7, 128, 
      2,   0, 228, 128,   4,   0, 
    170, 144,   1,   0, 228, 128, 
     46,   0,   0,   2,   0,   0, 
      8, 176,   0,   0, 255, 128, 
      9,   0,   0,   4,   1,   0, 
      1, 128,   0,   0, 228, 144, 
     41,  32, 228, 160,   0,   0, 
    255, 176,  46,   0,   0,   2, 
      0,   0,   8, 176,   0,   0, 
    255, 128,   9,   0,   0,   4, 
      1,   0,   2, 128,   0,   0, 
    228, 144,  42,  32, 228, 160, 
      0,   0, 255, 176,  46,   0, 
      0,   2,   0,   0,   8, 176, 
      0,   0, 255, 128,   9,   0, 
      0,   4,   1,   0,   4, 128, 
      0,   0, 228, 144,  43,  32, 
    228, 160,   0,   0, 255, 176, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   1,   0, 228, 128, 
      4,   0, 255, 144,   0,   0, 
    228, 128,   5,   0,   0,   3, 
      1,   0,  15, 128,   0,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 128, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   1,   0,   0,   2, 
      0,   0,  15, 192,   0,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
    255, 128,  14,   0,  85, 161, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
     14,   0, 170, 160,  11,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 128,  14,   0, 
    255, 160,  10,   0,   0,   3, 
      0,   0,   4, 224,   0,   0, 
      0, 128,   4,   0, 170, 160, 
      1,   0,   0,   2,   0,   0, 
      3, 224,   2,   0, 228, 144, 
    255, 255,   0,   0
};
