#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: String to search
 * @needle: word to find
 *
 * Return: pointer to the beginning of the located substring, or 0 if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		while (*(haystack + i + j) == *(needle + j) && *(needle + j) != '\0')
			j++;

		if (*(needle + j) != '\0')
		{
			j = 0;
			i++;
		}

		if (*(needle + j) == '\0')
			return (haystack + i);
	}

	return (0);
}

