#pragma once

#include "defines.h"

#define LOG_WARN_ENABLED 1
#define LOG_INFO_ENABLED 1
#define LOG_DEBUG_ENABLED 1
#define LOG_TRACE_ENABLED 1

// Debug and trace are disabled for release builds.
#if PRELEASE == 1
#define LOG_DEBUG_ENABLED 0
#define LOG_TRACE_ENABLED 0
#endif

typedef enum log_level {
  LOG_LEVEL_FATAL = 0,
  LOG_LEVEL_ERROR = 1,
  LOG_LEVEL_WARN = 2,
  LOG_LEVEL_INFO = 3,
  LOG_LEVEL_DEBUG = 4,
  LOG_LEVEL_TRACE = 5,
} log_level;

b8 initialize_logging();
void shutdown_logging();

PAPI void log_output(log_level level, const char *message, ...);

#ifndef PFATAL
// Logs a fatal-level message.
#define PFATAL(message, ...) log_output(LOG_LEVEL_FATAL, message, ##__VA_ARGS__);
#endif

#ifndef PERROR
// Logs an error-level message.
#define PERROR(message, ...) log_output(LOG_LEVEL_ERROR, message, ##__VA_ARGS__);
#endif

#if LOG_WARN_ENABLED == 1
#define PWARN(message, ...) log_output(LOG_LEVEL_WARN, message, ##__VA_ARGS__);
#else
#define PWARN(message, ...)
#endif

#if LOG_INFO_ENABLED == 1
#define PINFO(message, ...) log_output(LOG_LEVEL_INFO, message, ##__VA_ARGS__);
#else
#define PINFO(message, ...)
#endif

#if LOG_DEBUG_ENABLED == 1
#define PDEBUG(message, ...) log_output(LOG_LEVEL_DEUBUG, message, ##__VA_ARGS__);
#else
#define PDEBUG(message, ...)
#endif

#if LOG_TRACE_ENABLED == 1
#define PTRACE(message, ...) log_output(LOG_LEVEL_TRACE, message, ##__VA_ARGS__);
#else
#define PTRACE(message, ...)
#endif
