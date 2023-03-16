#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index && current->next != NULL; i++)
current = current->next;

if (i < index)
return (-1);

current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);

return (1);
}
