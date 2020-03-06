#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	a = malloc(nmemb * size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = '\0';
	return ((void *)(a));
}
