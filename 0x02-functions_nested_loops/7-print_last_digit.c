#include "holberton.h"
/**
   * print_last_digit - function that prints the last digit of a number.
   * @x: The input number to check
   * Return: int.
*/

int print_last_digit(int x)
{
	int last;

	if (x < 0)
	{
		x = x * (-1);
		last = x % 10;
		_putchar(last + '0');
		return (x);
	}
	else
	{
		last = x % 10;
		_putchar(last + '0');
		return (x);
	}
}
