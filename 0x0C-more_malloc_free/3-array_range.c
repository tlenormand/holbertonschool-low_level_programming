#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min number to begin
 * @max: max number to stop
 * Return: array or NULL if fail
 */

int *array_range(int min, int max)
{
	int *list = NULL;
	int size, i, index = 0;

	if (min > max)
		return (NULL);

	size = max - min;

	list = (int *)malloc(1 + size * (sizeof(int)));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = min; i <= max; i++, index++)
	{
		list[index] = i;
	}

	return (list);
}
