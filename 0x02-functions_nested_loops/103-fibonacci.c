#include <stdio.h>

/**
 * main - xxx
 *
 * Return: 0 always
 */

int main(void)
{

int i = 3;
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int c = 3;

while (i <= 4000000)
{
	if (i % 2 == 0)
    {
    c = fib1 + fib2;
	fib1 = fib2;
	fib2 = c;
	printf("%lu", c);
	if (i != 4000000)
		printf(", ");
    }
    i++;
}
printf("\n");

	return (0);
}
