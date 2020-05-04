#include "lists.h"
/**
  *sum_dlistint - function taht sums all n in a list
  *@head: head of the list
  *Return: sum of n in a list
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
