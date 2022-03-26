#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string to print
 *
 * Return: None
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		i = i;

	if (i % 2 != 0)
		i += 1;

	for (j = i / 2; str[j] != '\0'; j++)
		_putchar(str[j]);

	_putchar('\n');
}
