#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number to print
 */

void print_number(int n)
{

	int i = 0;
	int number_in_n;
	int j = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
			_putchar('-'), n = n * (-1);
		number_in_n = n;
		while (number_in_n > 0)
		{
			i++;
			number_in_n = number_in_n / 10;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((n / j) % 10 + '0');
			j = j / 10;
		}
	}
}
