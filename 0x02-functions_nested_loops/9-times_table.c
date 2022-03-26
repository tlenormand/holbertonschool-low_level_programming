#include "main.h"

/**
 * times_table -  function that prints the 9 times table
 *
 * Return: None
 */

void times_table(void)
{
	int i = 0, j = 0, c = 0;

	while (j < 10)
	{
		while (i < 10)
		{
			c = j * i;
			if (j * (i + 1) > 9)
			{
				if ((c / 10) == 0)
					_putchar((c % 10) + '0');
				else
					_putchar((c / 10) + '0'), _putchar((c % 10) + '0');

				if (i != 9)
					_putchar(','), _putchar(' ');
			}
			else
			{
				_putchar(c + '0');
				if (i != 9)
					_putchar(','), _putchar(' '), _putchar(' ');
			}

			i++;
		}

		_putchar('\n');
		i = 0;
		j++;
	}
}
