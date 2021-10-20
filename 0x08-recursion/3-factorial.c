#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to factor
 * Return: factored number, -1 if < 0
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	if (n < 0)
		return (-1);
	return (1);
}
