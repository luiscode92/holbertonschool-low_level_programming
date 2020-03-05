#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = 0, i,  k, size;
	unsigned int j;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
	{}
	for (j = 0 ; s2[j] <= s2[n]  ; j++)
	{}
	size = i + j;
	a = malloc((size + 1) * sizeof(char));
	/* Error handler*/
	if (a == NULL)
		return (NULL);



	for (k = 0 ; k < i ; k++)
	{
		a[k] = s1[k];
	}
	for (; l <= n ; l++)
	{
		a[k + l] = s2[l];
	}
	a[k + l] = '\0';
	return (a);
}
