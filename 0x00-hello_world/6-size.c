#include <stdio.h>

/**
 * main - Print the size of the differents type
 *
 * Return: 0 always for main
 */

int main(void)
{
	short int_type;
	int long_int_type;
	float float_type;
	long long_long_int_type;
	char char_type;

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %zu bytes\n", sizeof(char_type));
	printf("Size of a int: %zu bytes\n", sizeof(int_type));
	printf("Size of a long int: %zu bytes\n", sizeof(long_int_type));
	printf("Size of a long long int: %zu byte\n", sizeof(long_long_int_type));
	printf("Size of a float: %zu bute\n", sizeof(float_type));

	return (0);
}
