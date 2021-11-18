#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	int b;

	if (n == 0)
		b = '0';

	if (n > 0)
	{
		if ((n & 1) == 0)
			b = '0';
		else
			b = '1';

		if (n >> 1 != 0)
			print_binary(n = n >> 1);
	}

	_putchar(b);
}
