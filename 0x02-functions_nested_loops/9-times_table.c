#include "holberton.h"
/**
 * times_table - Void function
 * Return: Always 0 (Success)
 */

void times_table(void)

{
	int i, j, c, ten, unit; 
	
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
 		c = i * j;
			ten = c / 10;
			unit = c % 10;
				if (ten == 0)
				{
					if (j != 0)
					{
					
					_putchar(' ');
					}
					_putchar(unit + '0');
					if (j < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(ten + '0');
					_putchar(unit + '0');
					if (j < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
		}
	_putchar('\n');
	}
}


