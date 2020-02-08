#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0 ; i < 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
puts(i, j);
}
putchar('\n');
return (0);
}
