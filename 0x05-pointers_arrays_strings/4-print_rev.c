#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: input
 * Return: the result
 */
void print_rev(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
