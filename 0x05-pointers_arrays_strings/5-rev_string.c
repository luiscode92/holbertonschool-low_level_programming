#include "holberton.h"
#include <stdio.h>

void rev_string(char *s)
{
	int b = 0;
	int e = 0;
	char temp;

	for (e = 0 ; s[e] != '\0' ; e++)
	{
	}
	
	e -=1;
	while (e > b)
	{
		temp = s[b];
		s[b] = s[e];
		s[e] = temp;
		b++;
		e--;
	}
}
