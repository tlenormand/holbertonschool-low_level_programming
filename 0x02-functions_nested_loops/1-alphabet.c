#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase
 */

void print_alphabet(void)
{

int i = 0;

while (i < 26)
{
	_putchar(i + 97);
	i++;
}
_putchar('\n');
}
