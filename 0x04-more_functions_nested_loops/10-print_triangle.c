#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{

int i = 1;
int j;

if (size > 0)
{
	while (i <= size)
	{
		j = 0;
		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
else
{
	_putchar('\n');
}

}
