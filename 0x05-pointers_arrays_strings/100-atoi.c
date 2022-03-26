#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the number converted
 */

int _atoi(char *s)
{
	int i, sign_of_number = 1;
	unsigned int total = 0;

	for (i = 0; s[i] != '\0' && ((s[i] < 48 || s[i] > 57)); i++)
		if (s[i] == '-')
			sign_of_number *= -1;

	while (s[i] > 47 && s[i] < 58)
	{
		total = total * 10 + (s[i] - '0');
		i++;
	}

	total *= sign_of_number;

	return (total);
}
