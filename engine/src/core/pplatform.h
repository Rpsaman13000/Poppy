#pragma once

// Platform detection
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define PPLATFORM_WINDOWS 1
#ifndef _WIN64
#error "64 bit is required for Windows!"
#endif
#elif defined(__linux__) || defined(__gnu_linux__)
#define PPLATFORM_LINUX 1
#elif __APPLE__
#include <TargetConditionals.h>
#if TARGET_OS_MAC
#define PPLATFORM_APPLE 1
#else
#error "Only MAC is supported from Apple devices"
#endif
#endif

#ifdef PEXPORT

#ifdef _MSC_VER
#define PAPI __declspec(dllexport)
#else
#define PAPI __attribute__((visibility("default")))
#endif

#else

#ifdef _MSC_VER
#define PAPI __declspec(dllimport)
#else
#define PAPI
#endif

#endif
