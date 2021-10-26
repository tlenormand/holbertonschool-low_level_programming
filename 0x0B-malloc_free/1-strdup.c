#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int i;
	char *list = NULL;

	if (str == 0)
		return (NULL);

	list = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (list == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
		*(list + i) = *(str + i);

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
