#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: string concatenate or NULL if malloc failled
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, strlen_s1, strlen_s2;
	char *list = NULL;

	strlen_s1 = s1 == NULL ? 0 : _strlen(s1);
	strlen_s2 = s2 == NULL ? 0 : _strlen(s2);
	strlen_s2 = n >= strlen_s2 ? strlen_s2 : n;

	list = (char *)malloc(sizeof(char) * (strlen_s1 + n) + 3);
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; i < strlen_s1; i++)
	{
		*(list + i) = *(s1 + i);
	}

	for (i = 0; i < n && i < strlen_s2; i++)
		*(list + strlen_s1 + i) = *(s2 + i);

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
