#ifndef _MAIN_H
#define _MAIN_h

#define BUFSIZE MAXLENGTH

/* importing libraries */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Definition of type */

/**
 * struct format - structure for printing various types
 * @spac: type to print
 * @f: function to print
 */

typedef struct  format
{
	const char spac;
	int (*f)(va_list);
} format_t;

/* Function prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list par);
int print_s(va_list par);
int print_percent(__attribute__((unused))va_list par);
int (*get_func(const char a))(va_list);
int print(va_list ap);
int print_integer(va_list par);
int print_decimal(va_list par);

#endif
