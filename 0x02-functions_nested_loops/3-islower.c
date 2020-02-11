#include "holberton.h"
/**
   *_islower - function that checks for lowercase character.
   * @c: The input character to check
   * Return: int.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(c);
		return (1);
	}
	return (0);

}

