#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
		if (i < 58)
		{
			putchar(44);
			putchar(32);
		}

	}

	putchar('\n');
	return (0);
}
