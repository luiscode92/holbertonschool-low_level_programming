#include "holberton.h"
/**
 * rev_string - function that reverses a string.
 * @s: input
 * Return: output
 */
void rev_string(char *s)
{
	int b = 0;
	int e = 0;
	char temp;

	for (e = 0 ; s[e] != '\0' ; e++)
	{
	}
	e -= 1;
	while (e > b)
	{
		temp = s[b];
		s[b] = s[e];
		s[e] = temp;
		b++;
		e--;
	}
}
