#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a palindrome else 0
 * @s: number
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	int i;
	int j = 0;

	i = _strlen_recursion(s) - 1;
	return (palindrome(s, i, j));
}


/**
 * palindrome - function that returns 1 if a string is a palindrome else 0
 * @s: string
 * @i: from the end of the string
 * @j: from the start of the string
 * Return: 1 if palindrome else 0
 */

int palindrome(char *s, int i, int j)
{
	if (i > j)
		if (s[i] == s[j])
			return (palindrome(s, i - 1, j + 1));
		else
			return (0);
	else
		return (1);
	return (2);
}


/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to print
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
