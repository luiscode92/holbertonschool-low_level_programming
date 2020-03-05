#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int l = 0, i, j, k, size;
	char *a;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{}
	size = i + j + 1;
	a = malloc(size * sizeof(char));
	/*error handler*/
	if (a == NULL)
		return (NULL);
	for (k = 0 ; k < size ; k++)
	{

		if (k < i)
		{
			a[k] = s1[k];
		}
		else
		{
			a[k] = s2[l++];
		}
	}
	return (a);
}
