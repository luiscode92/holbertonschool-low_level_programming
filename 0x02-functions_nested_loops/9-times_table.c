#include "holberton.h"
/*
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
					if(ten != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					
					}
					_putchar(unit + '0');
				}
				else
				{	_putchar(',');
					_putchar(' ');
					_putchar(ten + '0');
					_putchar(unit + '0');
							
				}
				
				
	
		}
	_putchar('\n');
	
	}

	
}


