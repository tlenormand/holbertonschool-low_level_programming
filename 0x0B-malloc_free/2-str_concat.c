#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the string concatenate
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *list = NULL;

	list = (char *)malloc(sizeof(int) * (_strlen(s1) + _strlen(s2)));
	if (list == NULL)
		return (0);

	for (i = 0; i < _strlen(s1); i++)
	{
		*(list + i) = *(s1 + i);
	}

	for (i = 0; i < (_strlen(s2)); i++)
		*(list + _strlen(s1) + i) = *(s2 + i);

	return (list);
}


/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(char *s)
{

int i = 0;

	while (*s != 0)
		s++, i++;

	return (i);
}
