#includr "holberton.h"

char *rot13(char *s)
{
	int i = 0 , j;
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (s[i] != '\0')
	{
		for (j = 0 ; x[j] != '\0' ; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;				
			}
		}
		i++;
	}
	return (s);
}


