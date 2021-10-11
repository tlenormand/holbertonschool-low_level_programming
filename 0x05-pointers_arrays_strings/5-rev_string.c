#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{

int i, j;
char reverse[10];

	for (i = 0; s[i] != '\0'; i++)
		i = i;

	for (i = i - 1; i >= 0; i--)
	{
		for (j = 0; i >= 0; j++)
		{
			reverse[j] = s[i];
			i--;
		}
	}

	for (j = 0; s[j] != '\0'; j++)
		s[j] = reverse[j];

}
