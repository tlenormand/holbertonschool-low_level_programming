#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: length of the memory to allocate
 *
 * Return: memory allocated, 98 if NULL
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *list = NULL;

	list = (unsigned int *)malloc(b);
	if (list == NULL)
	{
		free(list);
		exit(98);
	}

	return (list);
}
