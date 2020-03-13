#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list arg;

	va_start(arg,n);

	for (i = 0, sum = 0 ; i < n ; i++)
	{
		sum = va_arg(arg, int);
		printf ("%d",sum);
		if (separator != 0)
		{
			printf ("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);

}
