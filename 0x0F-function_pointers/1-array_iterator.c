#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: array given
 * @size: size of the array
 * @action: function given as parameter
 *
 * Return : None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
