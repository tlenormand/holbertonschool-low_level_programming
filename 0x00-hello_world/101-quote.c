#include <stdio.h>

/**
 * main - Print a comment without usin prinf ans puts
 *
 * Return: 1 for the exercice
 */

int main(void)
{

char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

while (*s)
	putchar (*s++);

	return (1);
}
