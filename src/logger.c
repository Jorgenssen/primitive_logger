#include "logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

