#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to change the bit
 * @index: position of the bit to get
 * Return: 1 if success, 0 othewise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n &= ~(1 << index);
		return (1);
	}

	return (-1);
}

