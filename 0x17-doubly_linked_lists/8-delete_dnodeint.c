#include "lists.h"
/**
  *delete_dnodeint_at_index - delate function
  *@head: head of the list
  *@index: index
  *Return: 1 on successful, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	for (i = 0; i < index; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (curr->next)
			curr->next->prev = NULL;
		*head = curr->next;
	}
	else
	{
		if (curr->next)
			curr->next->prev = curr->prev;
		if (curr->prev)
			curr->prev->next = curr->next;
	}
	free(curr);
	return (1);
}
