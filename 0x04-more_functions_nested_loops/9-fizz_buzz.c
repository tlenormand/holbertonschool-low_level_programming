#include "main.h"
#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i < 101; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
			printf(" Fizz");
		else if ((i % 5 == 0) && !(i % 3 == 0))
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}

	printf("\n");
	return (0);
}
