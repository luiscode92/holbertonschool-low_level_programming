#include "lists.h"
/**
 * print_dlistint - print element of a single list
 * @h: linkned list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
