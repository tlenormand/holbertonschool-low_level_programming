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
	int i;

	if (min > max)
		return (NULL);

	list = (int *)malloc(1 + (max - min + 1) * (sizeof(int)));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; min <= max; i++)
		list[i] = min++;

	return (list);
}
