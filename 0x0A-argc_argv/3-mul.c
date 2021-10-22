#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int number1, number2;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	printf("%d\n", number1 * number2);

	return (0);
}
