#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separator to put between numbers
 * @b: number of parameters
 * Return: print numbers, separate by separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i + 1 < n)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
