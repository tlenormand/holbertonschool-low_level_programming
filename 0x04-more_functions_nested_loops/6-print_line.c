#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of repetition
 */

void print_line(int n)
{

int i = 0;

for (i = 0; i < n; i++)
	_putchar('_');
_putchar('\n');

}
