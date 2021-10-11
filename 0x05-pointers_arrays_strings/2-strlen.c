#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(char *s)
{

	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}

	return (strlen);
}
