/**
 * logger.h -- header wrapping logging methods
 *
 * Author: Nikita Tatiannikov 
 * Written on Friday, 14 May 2021.
 * Copyright (c) 2021
 * https://github.com/Jorgenssen/primitive_logger/
 */

#ifndef LOGGER_H
#define LOGGER_H

void logger(const char* tag, const char* message);
void log_debug(const char* message);
void log_info(const char* message);
void log_warn(const char* message);
void log_error(const char* message);

#endif /* LOG_H */
