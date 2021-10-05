#include <stdio.h>

/**
 * main - xxx
 *
 * Return: 0 always
 */

int main(void)
{

int i = 0;
long int fib1 = 0;
long int fib2 = 1;
long int c = 1;

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
