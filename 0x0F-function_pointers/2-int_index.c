#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function that searches for an intege
 * @array: the array
 * @size: size
 * @cmp: cmp
 * Return: position of integer in a array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
		return (-1);

	if (cmp != NULL)
	{

		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
			{
				break;
			}
		}
		return (i);
	}
	return (-1);
}
