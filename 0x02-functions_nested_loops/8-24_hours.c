#include "holberton.h"
/**
  *jack_bauer - writes the character c to stdout
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.|
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i <= 59 ; i++)
	{
		for (j = 0 ; j <= 23 ; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}

	}
}

