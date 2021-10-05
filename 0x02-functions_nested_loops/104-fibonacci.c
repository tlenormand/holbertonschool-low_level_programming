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
int cpt2 = 0;

while (i <= 500)
{
	fib2 = fib1;
	fib1 = c;
	c = fib1 + fib2;
	if (cpt2 != 98)
		printf("%lu, ", c);
	cpt2 += 1;
	i++;

}
printf("%lu\n", c);

return (0);
}
