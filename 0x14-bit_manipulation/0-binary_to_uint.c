#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string to convert
 * Return: the unsigned int, 0 if b == NULL or b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, bin_idx = 1, ui = 0;
	int i;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	for (i = len; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			ui += bin_idx;

		bin_idx *= 2;
	}

	return (ui);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(const char *s)
{

	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;

	return (strlen);
}
