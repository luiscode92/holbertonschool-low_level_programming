#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new;

	node = *head;

	while (node && node->next != NULL)
		node = node->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (node)
		node->next = new;
	else
		*head = new;
	return (new);
}
