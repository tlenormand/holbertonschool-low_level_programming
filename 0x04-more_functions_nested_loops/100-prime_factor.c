#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0 always
 */

int main(void)
{

	long int number;
	long int i = 0;
	int factor = 2;

	number = 612852475143;
	while (number > 1)
	{
		while (number % factor == 0)
		{
			i = factor;
			number = number / factor;
		}
		factor++;
	}
	printf("%ld\n", i);

	return (0);
}
