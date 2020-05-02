#include "lists.h"
/**
  * dlistint_len - print  elements in a linkned list
  *@h: linked list
  *Return: elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next
	}
	return (i);
}
