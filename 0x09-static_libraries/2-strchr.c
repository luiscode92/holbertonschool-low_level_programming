#include "holberton.h"
#include <stdio.h>
/**
  * _strchr - function that locates a character in a string.
  * @s: input
  * @c: input
  * Return: output
  */
char *_strchr(chr *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return (s);
}
