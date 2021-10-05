#include <stdio.h>

/**
 * main - xxx
 *
 * Return: 0 always
 */

int main(void)
{

int i = 0;
int fib1 = 0;
int fib2 = 1;
int c = 1;

while (i < 51)
{
	c = fib1 + fib2;
	fib1 = fib2;
	fib2 = c;
	i++;
	printf("%d, ", c);
}
printf("\n");

	return (0);
}
