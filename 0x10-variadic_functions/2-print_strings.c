#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator to put between strings
 * @n: number of parameters
 * Return: print string, separate by separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = n; i > 0; i--)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	
		if (separator && i - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
