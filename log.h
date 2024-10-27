#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#define log_int(var) printf(#var " = %d\n", var)
#define log_char(var) printf(#var " = %c\n", var)
#define log_float(var) printf(#var " = %f\n", var)
#define log_string(var) printf(#var " = %s\n", var)
#define log_pointer(var) printf(#var " = %p\n", var)
#define log_size_t(var) printf(#var " = %zu\n", var)
#define log_uint(var) printf(#var " = %u\n", var)

#endif