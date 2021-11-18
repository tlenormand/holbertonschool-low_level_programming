#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to get the index
 * @index: position of the bit to get
 * Return: value of the bit at index position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);

	if (index <= 32)
		return ((n >> index) & 1);

	return (-1);
}
