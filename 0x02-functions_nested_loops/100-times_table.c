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

if (n < 15 && n > 0)
{
	while (i <= n)
	{
		while (j <= n)
		{
			c = i * j;
			if (c > 99)
				_putchar((c / 100) + '0');
			else
				if (j != 0)
					_putchar(' ');

			if (c > 9)
				_putchar(((c / 10) % 10) + '0');
			else
			{
				if (j !=0)
					_putchar(' ');
			}
			
			_putchar(c % 10 + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}

		j = 0;
		_putchar('\n');
		i++;
	}
}
}
