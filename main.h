#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(const char *format, va_list args, int i);
int print_char(const char *format, va_list args, int i);
int _putchar(char c, int len);
int print_int(const char *format, va_list args, int i);
int print_uns_int(const char *format, va_list args, int i);
int (*get_format_func(const char *format, int i))(const char *, va_list, int);
int prints_string(char *string);
int print_percent(__attribute__((unused))va_list par);

#endif /* MAIN_H */
