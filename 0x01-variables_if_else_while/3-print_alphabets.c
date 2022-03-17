#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	while (i < 91)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
