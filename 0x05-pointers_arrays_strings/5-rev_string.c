#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: string to reverse
 *
 * Return: None
 */

void rev_string(char *s)
{
	int temp, length;
	int left = 0;

	for (length = _strlen(s) - 1; length > left; left++, length--)
	{
		temp = s[left];
		s[left] = s[length];
		s[length] = temp;
	}
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string to returns the length
 *
 * Return: Return the length of the string
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;

	return (strlen);
}
