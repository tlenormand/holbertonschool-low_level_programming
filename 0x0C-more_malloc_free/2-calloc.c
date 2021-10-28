#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array of nmemb elements
 * @size: size bytes
 * Return: the list created of NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *list = NULL;

	if (nmemb < 1 || size < 1)
		return (NULL);

	list = (unsigned int *)malloc(1 + nmemb * (sizeof(unsigned int)));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; i <= size; i++)
		list[i] = 0;

	return (list);
}
