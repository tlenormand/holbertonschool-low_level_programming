#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, c = 0;
	int i = 0;

	unsigned long int fib1_1, fib1_2, fib2_1, fib2_2, long_a, long_b;

	while (i < 92)
	{
		c = fib1 + fib2;
		printf("%lu, ", c);
		fib1 = fib2;
		fib2 = c;
		i++;
	}

	fib1_1 = fib1 / 10000000000, fib1_2 = fib2 / 10000000000;
	fib2_1 = fib1 % 10000000000, fib2_2 = fib2 % 10000000000;

	i = 92;

	while (i < 98)
	{
		long_a = fib1_1 + fib1_2;
		long_b = fib2_1 + fib2_2;
		if (fib2_1 + fib2_2 > 9999999999)
		{
			long_a += 1;
			long_b %= 10000000000;
		}

		printf("%lu%lu", long_a, long_b);
		if (i != 97)
			printf(", ");

		fib1_1 = fib1_2, fib2_1 = fib2_2, fib1_2 = long_a, fib2_2 = long_b;
		i++;
	}

	printf("\n");
	return (0);
}
