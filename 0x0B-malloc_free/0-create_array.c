#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char of the array
 * Return: the list created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *list = NULL;

	if (size == 0)
		return (0);

	list = malloc(sizeof(int) * size);
	if (list == NULL)
		return (0);

	for (i = 0; i < size; i++)
		*(list + i) = c;

	return (list);
}
