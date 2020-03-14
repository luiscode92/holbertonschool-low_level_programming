#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _char - print char type element from va_list
 * @args: va_list passed to function
 */
void _char(va_list args)
{
	char res;

	res = va_arg(args, int);
	printf("%c", res);
}

/**
 * _int - print int type element from va_list
 * @args: va_list passed to function
 */
void _int(va_list args)
{
	int res;

	res = va_arg(args, int);
	printf("%d", res);
}

/**
 * _strn - print string element from va_list
 * @args: va_list passed to function
 */
void _strn(va_list args)
{
	char *res;

	res = va_arg(args, char *);
	if (res != NULL)
	{
		printf("%s", res);
	}
	else
	{
		printf("(nil)");
	}
}

/**
 * _float - print float type element from va_list
 * @args: va_list passed to function
 */
void _float(va_list args)
{
	float res;

	res = va_arg(args, double);
	printf("%f", res);
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	functs str[] = {
		{ "c", _char },
		{ "f", _float },
		{ "s", _strn },
		{ "i", _int },
		{NULL, NULL}
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (str[j].fn != NULL)
		{
			if (str[j].fn[0] == format[i])
			{
				printf("%s", sep);
				str[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
