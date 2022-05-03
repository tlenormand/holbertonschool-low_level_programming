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

		if (array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid;
		else
			left = mid + 1;
	}

	return (-1);
}
