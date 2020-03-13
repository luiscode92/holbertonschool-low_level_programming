#include "variadic_functions.h"

void _char(va_list args)
{
	char res;
	res = va_arg(args, int);
	printf ("%c",res);
}

void _int(va_list args)
{
	int res;
	res = va_arg(args, int);
	printf ("%d", res);
}

void _strn(va_list args)
{
	char *res;
	res = va_arg(args, char*);
	if (res != NULL)
	{printf ("%s",res);
	}
	else
	{
		printf ("(nil)");
	}
	
	
}

void _float(va_list args)
{
	float res;
	res = va_arg(args, double);
	printf ("%f", res);
}

void print_all(const char * const format, ...)
{
unsigned int i, j;
	va_list args;
	char *sep;

	functs str[] = {
		{ "c", _char },
		{ "f", _float },
		{ "s", _strn },
		{ "i", _int },
		{NULL, NULL}
	};

	i = 0;

	sep = "";
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (str[j].fn != NULL)
		{
			if (str[j].fn[0] == format[i])
			{
				printf("%s", sep);
				str[j].f(args);
				sep = ", ";
				
			
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

