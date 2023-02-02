#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
