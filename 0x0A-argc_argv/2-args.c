#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
