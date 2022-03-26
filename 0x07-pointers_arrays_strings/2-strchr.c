#include "main.h"

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
