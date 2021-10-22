#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: used to print the number of arguments
 * @argv: unused parameter
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	(void) **argv;

	printf("%d\n", argc - 1);

	return (0);
}
