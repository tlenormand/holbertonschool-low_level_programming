#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @string_cap: string to capitalize
 *
 * Return: string capitalized
 */

char *cap_string(char *string_cap)
{
	int caractere[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; string_cap[i] != '\0'; i++)
		if (string_cap[i] > 96 && string_cap[i] < 123)
		{
			if (i == 0)
				string_cap[i] -= 32;
			for (j = 0; caractere[j] != '\0'; j++)
				if (string_cap[i - 1] == caractere[j])
					string_cap[i] -= 32;
		}

	return (string_cap);
}
