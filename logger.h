#ifndef LOGGER_H
#define LOGGER_H

void logger(const char* tag, const char* message);
void log_debug(const char* message);
void log_info(const char* message);
void log_warn(const char* message);
void log_error(const char* message);

#endif /* LOG_H */
