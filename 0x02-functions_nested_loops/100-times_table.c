#include "main.h"
#include <stdio.h>

/**
 * times_table - xxx
 *
 * Return: xxx
 */

void print_times_table(int n)
{
int i = 0;
int j = 0;
int c = 0;
int d = 0;

if (n < 15 && n > 0)
{
	while (j < n + 1)
	{
		while (i < n + 1)
		{
			c = j * i;
			if ((c / 10) != 0)
			{
				if (c > 99)
				{
					d = c / 10;
					_putchar((d / 10) + '0'), _putchar((d % 10) + '0');
				}
				else
					_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
			if (i != n)
				_putchar(','), _putchar(9);
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
}
