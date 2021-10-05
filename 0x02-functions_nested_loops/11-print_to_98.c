#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - xxx
 *
 * @n: number
 *
 * Return: xxx
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
