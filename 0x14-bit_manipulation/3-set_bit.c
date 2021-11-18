#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to change the bit
 * @index: position of the bit to get
 * Return: 1 if success, 0 othewise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *number = n;

	if (n == NULL)
		return (-1);

	if (index <= 32)
	{
		*number = ((*number >> index));
		if (((*number >> 0) & 1) == 0)
			*number += 1;
		*number = (*number << index);
		*n = *n | *number;
		return (1);
	}

	return (-1);
}

