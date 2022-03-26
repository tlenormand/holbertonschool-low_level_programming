#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination to concatenate
 * @src: string to concatenate
 *
 * Return: the result concatenate
 */

char *_strcat(char *dest, char *src)
{
	int j, strlen = 0;

	while (dest[strlen] != '\0')
		strlen++;

	for (j = 0; src[j] != '\0'; j++)
		dest[strlen + j] = src[j];

	dest[strlen + j] = '\0';

	return (dest);
}
