#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters, 0 if no parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}

	return (result);
}
