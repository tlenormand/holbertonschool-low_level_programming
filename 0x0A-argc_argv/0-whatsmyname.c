#include <stdio.h>

/**
 * main - programme that prints its name
 * @argc: unused parameter
 * @argv: used to print the name of the programme
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
