#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 0, c = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			c += i;
		i++;
	}

	printf("%d\n", c);
	return (0);
}
