#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function print sentence and name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
