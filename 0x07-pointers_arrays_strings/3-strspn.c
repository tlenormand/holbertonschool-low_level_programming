#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be controlled
 * @accept: charactere to control in s
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (len);

	while (*s && _strchr(accept, *s++))
		len++;

	return (len);
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
