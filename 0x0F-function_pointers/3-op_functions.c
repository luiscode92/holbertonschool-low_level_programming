#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);

}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b <= 0 || a > b)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);	
}
