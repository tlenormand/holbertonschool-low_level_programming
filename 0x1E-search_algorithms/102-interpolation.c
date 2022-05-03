#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;

	if (size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end && value >= array[start] && value <= array[end])
	{
		pos = start + (((double)(end - start) /
				(array[end] - array[start])) *
				(value - array[start]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			start = pos + 1;
		else
			end = pos - 1;
	}
	pos = start + (((double)(end - start) /
				   (array[end] - array[start])) *
				   (value - array[start]));
	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
