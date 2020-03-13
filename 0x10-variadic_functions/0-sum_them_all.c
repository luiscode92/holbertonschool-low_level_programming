#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int sum;

	va_start(arg, n);
	for (i = 0, sum = 0; i < n; i++)
		sum = va_arg(arg, int) + sum;
	

	va_end(arg);

	return (sum);

}
