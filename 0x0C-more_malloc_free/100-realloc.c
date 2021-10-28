#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: old array
 * @old_size: size of the old array
 * @new_size: size of the new array
 * Return: the new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	else
		_memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}


/**
 * _memcpy - function that copies memory area
 * @dest: memory area dest
 * @src: memory area src
 * @n: copies n bytes from memory area
 * Return: a pointer to destination (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n != 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}

	return (dest);
}
