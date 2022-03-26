#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	long int fib1 = 0, fib2 = 1, c = 1;
	int i = 0;

	while (i < 50)
	{
		c = fib1 + fib2;
		fib1 = fib2;
		fib2 = c;
		printf("%ld", c);
		i++;
		if (i != 50)
			printf(", ");
	}

	printf("\n");
	return (0);
}
