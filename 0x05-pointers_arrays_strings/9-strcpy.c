#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: value to return
 * @src: string to copy
 * Return: return value: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
