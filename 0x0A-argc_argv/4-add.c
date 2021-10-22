#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 or error if *argv[i] is not a number
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
