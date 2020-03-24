#include "lists.h"
/**
  *add_nodeint - function
  *@head: head of the list
  *@n: the list
  *Return: address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new;

	node = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	*head = new;
	if (node == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = node;
	}
	return (new);
}
