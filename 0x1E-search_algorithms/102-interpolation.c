#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        of integers using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
