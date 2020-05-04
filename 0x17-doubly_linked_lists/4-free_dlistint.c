#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
