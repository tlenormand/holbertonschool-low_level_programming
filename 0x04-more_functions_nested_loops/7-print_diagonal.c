#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of repetition
 */

void print_diagonal(int n)
{

int i = 0;
int j = 0;

if (n > 0)
	for (i = 0; i < n; i++)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
else
	_putchar('\n');

}
