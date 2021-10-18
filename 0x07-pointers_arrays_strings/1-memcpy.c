#include "main.h"

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
