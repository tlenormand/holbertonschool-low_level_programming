#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: the number converted
 */

int _atoi(char *s)
{

	int j, sign_of_number, total;

	sign_of_number = 1;
	total = 0;

	for (j = 0; s[j] != '\0' && ((s[j] < 48 || s[j] > 57)); j++)
		if (s[j] == '-')
			sign_of_number *= -1;

	while (s[j] > 47 && s[j] < 58)
	{
		total = total * 10 * sign_of_number + (s[j] - '0');
		j++;
	}

	return (total);
}
