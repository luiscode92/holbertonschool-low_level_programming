#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *a, i;
	if (min < max)
		return (NULL);
	a = malloc((max - min + 1) *sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++ ,  min++)
		a[i] = min;
	return (a);
}
