#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in the list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
return (NULL);

express = list;
while (express)
{
if (express->n >= value)
break;
current = express;
if (express->express == NULL)
{
while (express->next)
express = express->next;
break;
}
express = express->express;
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
}

printf("Value found between indexes [%lu] and\n[%lu]\n",
current->index, express->index);

while (current && current->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
current = current->next;
}

if (current && current->n == value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
return (current);
}

return (NULL);
}
