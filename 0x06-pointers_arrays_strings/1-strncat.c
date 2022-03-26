#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination to concatenate
 * @src: string to concatenate
 * @n: number of src to print in dest
 *
 * Return: the result concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, strlen = 0;

	while (dest[strlen] != '\0')
		strlen++;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[strlen + j] = src[j];

	dest[strlen + j] = '\0';

	return (dest);
}
