#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: input
 * @max: input
 * Return: output
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
