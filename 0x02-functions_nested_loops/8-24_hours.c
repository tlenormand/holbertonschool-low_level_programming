#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 * Return: None
 */

void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(58);
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}

		j = 0;
		i++;
	}
}
