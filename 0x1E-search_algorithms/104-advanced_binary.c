/*
 * File: 104-advanced_binary.c
 * Auth: Brennan D Baraban
 */

#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @left: The leftmost index of the subarray to print.
 * @right: The rightmost index of the subarray to print.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of
 *                            integers using advanced binary search.
 * @array: A pointer to the first element of the array to search in.
 * @left: The leftmost index of the subarray to search.
 * @right: The rightmost index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] > value)
		return (advanced_binary_recursive(array, left, mid - 1, value));
	else
		return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 *                   advanced binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Uses recursion and the advanced binary search algorithm to find
 *              the index of the first occurrence of a value in an array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
