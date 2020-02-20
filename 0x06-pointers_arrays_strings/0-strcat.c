#include "holberton.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: input
 * @src: input
 * Return: output
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{}
	for (j = 0 ; src[j] != '\0' ; j++)
	{	dest[i + j] = src[j];
	}
	return (dest);
}
