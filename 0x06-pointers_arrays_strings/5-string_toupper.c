#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @string_up: string to up
 * Return: string in uppercase
 */

char *string_toupper(char *string_up)
{
	int i;

	for (i = 0; string_up[i] != '\0'; i++)
		if (string_up[i] > 96 && string_up[i] < 123)
			string_up[i] = string_up[i] - 32;

	return (string_up);
}
