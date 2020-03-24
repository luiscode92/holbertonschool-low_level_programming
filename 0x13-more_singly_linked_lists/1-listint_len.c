#include "lists.h"
/**
  *listint_len - function
  *@h: list
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
