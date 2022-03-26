#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: None
 */

void print_triangle(int size)
{
	int j, i = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
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
		_putchar('\n');
}
