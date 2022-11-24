#pragma once

// ExitCode.h: Defines exit codes for an application
// Copyright (c) 2022 Kývýlcým Cemal Öztürk-Hatipoðlu.

#define SE_SUCCESS 0x0 // Success.
#define SE_IO 0x1 // I/O error.
#define SE_ALLOC 0x2 // Allocation failure.
#define SE_INSTANTIATE 0x3 // Instantiation failure.
#define SE_LIBRARY 0x4 // An external library error.
#define SE_WIN32 0x5 // A Win32 API callback failure.
#define SE_LINUX 0x6 // A Linux API callback failure. (SELinux failures are declared by SE_SELINUX.)
#define SE_COCOA 0x7 // A Cocoa (macOS) API callback failure.
#define SE_SFML 0x8 // An SFML API callback failure.
#define SE_OPENGL 0xA0 // An OpenGL API callback failure (with error code ORed to the LPARAM.)
#define SE_SIMD 0xB0 // A SIMD API callback failure (with error code ORed to the LPARAM.)
#define SE_FATAL 0xFF // A fatal error.
#define SE_ASM_EXEC 0xC // Assembly code failure.
#define SE_MATH 0xD0 // Mathematical error. (Suberror ORed to the LPARAM).

// Mathematical error codes.
#define SE_MATH_DIV0 0xD1 // Divide by zero.
#define SE_MATH_POW0_0 0xD2 // 0 to the power 0.
#define SE_MATH_IRRAT 0xD3 // Irrational number.



