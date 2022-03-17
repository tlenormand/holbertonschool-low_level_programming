#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array given
 * @size: size of the array
 * @cmp: function given as parameter
 *
 * Return: index of the first element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, result;

	if (size < 1)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			result = cmp(array[index]);
			if (result != 0)
				return (index);
		}
	}

	return (-1);
}
