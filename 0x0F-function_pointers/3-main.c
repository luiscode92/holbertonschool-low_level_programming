#include "3-calc.h"

int main(int argc, char *argv[])
{
	int res;
	int a , b;
	
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		res = get_op_func(argv[2])(a,b);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

