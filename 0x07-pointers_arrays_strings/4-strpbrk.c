#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: charactere to search in s
 *
 * Return: matches one of the bytes in accept, or 0 if not find
 */

char *_strpbrk(char *s, char *accept)
{
	if ((*s == '\0') || (*accept == '\0'))
		return (0);

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);

		s++;
	}

	return (0);
}


/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to find
 * @c: charactere to dearch
 *
 * Return: first occurence of c in s or 0 if not fund
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		++s;

	return ((*s != '\0' || c == '\0') ? s : 0);
}
