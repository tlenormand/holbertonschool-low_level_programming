#include <stdio.h>

/**
 * main - xxx
 *
 * Return: 0 always
 */

int main(void)
{

int i = 0;
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int c = 1;

while (i < 98)
{
	if (i == 0)
		printf("%lu", c);
	else
		printf(", %lu", c);
	fib2 = fib1;
	fib1 = c;
	c = fib1 + fib2;
	i++;
}

fib2 = fib1;
fib1 = c;
c = fib1 + fib2;
printf(", %lu", c / 10000000000000000);

printf("\n");
return (0);
}
