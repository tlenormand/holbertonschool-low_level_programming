#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @s: string to print
 */

void puts2(char *s)
{

int i;

	for (i = 0; s[i] != '\0'; i += 2)
		_putchar(s[i]);
	_putchar('\n');

}
