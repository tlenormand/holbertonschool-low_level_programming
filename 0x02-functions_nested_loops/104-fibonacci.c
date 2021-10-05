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
int cpt2 = 1;

while (i <= 1000)
{
	fib2 = fib1;
	fib1 = c;
	c = fib1 + fib2;
	if (c % 2 == 0)
	{
	cpt2 += 1;
	if (cpt2 != 98)
		printf("%lu, ", c);
	}
	i++;
}
printf("%lu\n", c);
printf("%d", cpt2);
return (0);
}
