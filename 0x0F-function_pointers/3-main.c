#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int (*res)(int, int);
	int a, b;
	
	if (argc == 4)
	{
		res = get_op_func(argv[2]);
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		
		printf("%d", res(a,b));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

