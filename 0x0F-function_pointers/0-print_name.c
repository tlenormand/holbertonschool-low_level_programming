#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to print
 * @f: function print sentence and name
 *
 * Return : None
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
