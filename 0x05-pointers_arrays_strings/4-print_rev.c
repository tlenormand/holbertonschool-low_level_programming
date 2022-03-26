#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: string to print
 *
 * Return: None
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i = i;

	for (i = i - 1; s[i] != 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
