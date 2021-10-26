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
	char *list;

	if (size == 0)
		return (NULL);

	list = (char *)malloc(sizeof(char) * size);
	if (list == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(list + i) = c;

	return (list);
}
