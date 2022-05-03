#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t i = 0;

	if (!array)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		i = jump;
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump += sqrt(size);
	}

	if (array[i] <= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
		while (i < size && i <= jump)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}

	return (-1);
}
