#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value
 * in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (size == 0)
		return (-1);

	return (advanced_binary_search(array, 0, size - 1, value));
}


/**
 * advanced_binary_search - function that searches for a value
 * in a sorted array of integers recursively
 *
 * @array: pointer to the first element of the array to search in
 * @left: left position of the array
 * @right: right position of the array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int advanced_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;
	size_t i = 0;

	/* print the array */
	printf("Searching in array: ");
	for (i = 0; i < right - left; i++)
		printf("%d, ", array[i + left]);
	printf("%d\n", array[i + left]);

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (right - left == 0)
		return (-1);
	else if (array[mid] >= value)
		return (advanced_binary_search(array, left, mid, value));

	return (advanced_binary_search(array, mid + 1, right, value));
}
