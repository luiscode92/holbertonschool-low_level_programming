#include "lists.h"
/**
 * print_dlistint - print element of a single list
 * @h: linkned list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *temp = h;
    size_t i;

    while(temp != NULL)
    {
        printf("%d\n",temp->n);
        temp = temp->next;
        i++;
    }
    return (i);

}