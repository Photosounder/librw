#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float4 fogColor;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   fogColor     c0       1
//

    ps_2_0
    dcl t0.xyz
    dcl v0
    add r0.xyz, v0, -c0
    mad r0.xyz, t0.z, r0, c0
    mov r0.w, v0.w
    mov oC0, r0

// approximately 4 instruction slots used
#endif

const BYTE g_ps20_main[] =
{
      0,   2, 255, 255, 254, 255, 
     32,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  83,   0, 
      0,   0,   0,   2, 255, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     76,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
    102, 111, 103,  67, 111, 108, 
    111, 114,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,   7, 176,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,   2,   0, 
      0,   3,   0,   0,   7, 128, 
      0,   0, 228, 144,   0,   0, 
    228, 161,   4,   0,   0,   4, 
      0,   0,   7, 128,   0,   0, 
    170, 176,   0,   0, 228, 128, 
      0,   0, 228, 160,   1,   0, 
      0,   2,   0,   0,   8, 128, 
      0,   0, 255, 144,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      0,   0, 228, 128, 255, 255, 
      0,   0
};
