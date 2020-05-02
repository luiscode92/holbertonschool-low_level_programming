#include "lists.h"
/**
 * add_dnodeint - add a node at the beguining of a linked list
 * @head: head of linked list
 * @n: of the new node
 * Return: the address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);

}
