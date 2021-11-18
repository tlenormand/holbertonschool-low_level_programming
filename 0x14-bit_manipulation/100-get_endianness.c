#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: number of different bits
 */

int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	return (*y + 48);
}
