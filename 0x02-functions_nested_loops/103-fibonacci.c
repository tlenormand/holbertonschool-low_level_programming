#include <stdio.h>

/**
 * main - xxx
 *
 * Return: 0 always
 */

int main(void)
{

int i = 1;
unsigned long int fib1 = 0;
unsigned long int fib2 = 1;
unsigned long int c = 1;
unsigned long int cpt = 0;

while (i <= 100)
{
	fib2 = fib1;
	fib1 = c;
	c = fib1 + fib2;
	if (c % 2 == 0)
		if (cpt < 4000000)
			cpt += c;
	i++;
}
printf("%lu\n", cpt);

	return (0);
}
