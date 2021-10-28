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
	unsigned int i;
	char *list = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	list = (char *)malloc(1 + nmemb * size);
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; i <= nmemb; i++)
		list[i] = 0;

	return (list);
}
