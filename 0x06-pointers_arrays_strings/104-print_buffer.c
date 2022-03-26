#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @b: string
 * @size: size of the string
 *
 * Return: None
 */

void print_buffer(char *b, int size)
{
	int i = 0, charactere;

	while (i < size)
	{
		if (i % 10 == 0)
		{
			printf("%08x: ", i);
			printf("%02x", b[i]);
		}

		i++;
		while (i % 10 != 0 && i < size)
		{
			if (i % 2 != 0)
				printf("%02x ", b[i]);
			else
				printf("%02x", b[i]);

			i++;
		}

		if (i % 10 != 0)
			print_last_line(b, i);

		for (charactere = i - 10; charactere < i && i % 10 == 0; charactere++)
		{
			if (b[charactere] > 31 && b[charactere] < 126)
				printf("%c", b[charactere]);
			else
				printf(".");
		}

		printf("\n");
	}
}


/**
 * print_last_line - function that print last line of the buffer
 *
 * @b: string
 * @i: previous index stopped
 *
 * Return: None
 */

void print_last_line(char *b, int i)
{
	int j;

	for (j = i; j % 10 != 0; j++)
	{
		if (j % 2 == 0)
			printf(" ");

		printf("  ");
	}

	for (j = i - i % 10; j < i; j++)
	{
		if (b[j] > 10)
			printf("%c", b[j]);
		else
			printf(".");
	}
}
