#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		while (i < 26)
		{
			_putchar(i + 97);
			i++;
		}

		i = 0;
		_putchar('\n');
		j++;
	}
}
