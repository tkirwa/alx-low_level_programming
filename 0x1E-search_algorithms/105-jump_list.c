#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, step;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev = NULL;

	while (current && current->n < value)
	{
		prev = current;
		step = jump;
		while (current->next && current->index < step)
		{
			prev = current;
			current = current->next;
			step += jump;
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
