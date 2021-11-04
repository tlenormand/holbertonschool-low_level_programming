#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: format of the string to print
 * Return: print string
 */

void print_all(const char * const format, ...)
{
	search_type_t format_of_char[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char_pointer},
		{NULL, NULL}
	};
	int index1 = 0, index2 = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);

	while (format && format[index1])
	{
		while (format_of_char[index2].type)
		{
			if (format[index1] == *format_of_char[index2].type)
			{
				printf("%s", separator);
				separator = ", ";
				format_of_char[index2].f(args);
			}
			index2++;
		}
		index1++;
		index2 = 0;

	}
	va_end(args);
	printf("\n");
}


/**
 * print_char - print char
 * @args: arg to print
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_integer - print integer
 * @args: arg to print
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
 * print_float - print float
 * @args: arg to print
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_char_pointer - print string
 * @args: arg to print
 */

void print_char_pointer(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
