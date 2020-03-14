#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
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
