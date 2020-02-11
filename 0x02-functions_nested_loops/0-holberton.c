#include "holberton.h"
/**
 * main - program that prints Holberton.
 *
 * Return: int
*/
int main(void)
{
int i;
char hbt[9] = "Holberton";
for (i = 0 ; i <= 8 ; i++)
{
_putchar(hbt[i]);
}
_putchar('\n');
return (0);
}
