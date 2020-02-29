#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

