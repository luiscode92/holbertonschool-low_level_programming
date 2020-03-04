#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0 ; j < i ; j++)
		a[j] = str[j];
	return (a);
}
