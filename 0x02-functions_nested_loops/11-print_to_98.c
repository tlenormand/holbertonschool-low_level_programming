#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 *
 * @n: number
 *
 * Return: None
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("98");

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

		printf("98");
	}

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		printf("98");
	}

	printf("\n");
}
