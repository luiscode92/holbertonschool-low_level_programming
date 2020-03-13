#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _char(va_list args);
void _strn(va_list args);
void _float(va_list args);
void _int(va_list args);

typedef struct functs
{
	char *fn;
	void (*f)();
} functs;
#endif
