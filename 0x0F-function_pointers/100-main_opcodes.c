#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 if ok, exit 1 or 2 if error
 */

int main(int argc, char **argv)
{
	int (*p)(int, char **);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = &main;

	for (i = 4; i < atoi(argv[1]) + 4; i++)
		printf("%02x ", *((unsigned char *)(p + i)));
	printf("\n");

	return (0);
}
