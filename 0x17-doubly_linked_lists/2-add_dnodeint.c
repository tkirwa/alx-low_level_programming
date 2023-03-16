#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer to the head node of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
