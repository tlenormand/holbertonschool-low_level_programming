#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 or 1 and error if *argv[i] is not a number
 */

int main(int argc, char *argv[])
{
	int x = 1, y = 0, sum = 0;

	while (x < argc)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
		x++;
	}

	printf("%d\n", sum);

	return (0);
}
