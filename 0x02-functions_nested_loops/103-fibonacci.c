#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, c = 1, cpt = 0;
	int i = 1;

	while (i <= 100)
	{
		fib2 = fib1;
		fib1 = c;
		c = fib1 + fib2;
		if (c % 2 == 0 && cpt < 4000000)
			cpt += c;

		i++;
	}

	printf("%lu\n", cpt);
	return (0);
}
