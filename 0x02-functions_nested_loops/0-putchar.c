#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 always
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
