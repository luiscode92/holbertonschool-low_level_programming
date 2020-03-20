#include "lists.h"

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *s;
	size_t i;

	i =  0;
	s = h;
	while (s != NULL)
	{
		if (s->str != NULL)
		{
			printf("[%d] %s\n", s->len, s->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		s = s->next;

		i++;

	}
	return (i);
}
