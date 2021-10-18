#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed to by s
 * @b: constant byte b
 * @n: first n bytes of the memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n != 0)
	{
		*(s + n - 1) = b;
		n--;
	}

	return (s);
}
