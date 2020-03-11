#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size
 * @action: ponter function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
	size_t i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
	}
}
