#include "lists.h"
/**
  * list_len - number of elements in a linked list_t list.
  * @h: list
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	const list_t *s;
	size_t i;

	i = 0;
	s = h;
	while (s != NULL)
	{
		s = s->next;
		i++;
	}
	return (i);
}
