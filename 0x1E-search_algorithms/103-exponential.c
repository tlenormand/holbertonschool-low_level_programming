#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t high = 1;
	size_t idx;

	if (!array)
		return (-1);

	while (array[high] < value && high < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		prev = high;
		high *= 2;
		if (high > size - 1)
			high = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, high);

	idx = binary_search(array + prev, high - prev + 1, value);

	if (idx > size)
		return (-1);

	return (prev + idx);
}

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	while (right >= left)
	{
		mid = left + (right - left) / 2;

		/* print the array */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
