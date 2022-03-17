#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
        return (1);

    printf("%s", s);
    free(s);

    return (0);
}











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
