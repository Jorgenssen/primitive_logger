/**
 * logger.c -- util wrapping logging methods
 *
 * Author: Nikita Tatiannikov 
 * Written on Monday, 14 May 2021.
 * Copyright (c) 2021
 * https://github.com/Jorgenssen/primitive_logger/
 */

#include "logger.h"
#include <stdio.h>  // for printf
#include <time.h>   // for localtime, strftime, time, time_t

void logger(const char* tag, const char* message) {
  time_t now;
  time(&now);
  char buff[16];
  strftime (buff, 16, "%y%m%d %H%M%S", localtime(&now));
  printf("%s %s - %s%s", tag, buff, message, "\n");
}

void log_debug(const char* message) {
  logger("DEBUG", message);
}

void log_info(const char* message) {
  logger("INFO ", message);
}

void log_warn(const char* message) {
  logger("WARN ", message);
}

void log_error(const char* message) {
  logger("ERROR", message);
}

