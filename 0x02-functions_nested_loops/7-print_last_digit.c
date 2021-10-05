#include "main.h"

/**
 * print_last_digit - xxx
 *
 * @n: varaible test
 *
 * Return: xxx
 */

int print_last_digit(int n)
{

int last_digit;

if (n < 0)
	n = n * -1;

last_digit = n % 10;

return (last_digit);
}
