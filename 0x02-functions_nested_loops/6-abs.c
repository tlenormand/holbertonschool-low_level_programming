#include "main.h"
#define CHARBIT 8

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: varaible number
 *
 * Return: absolute value of the number n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
